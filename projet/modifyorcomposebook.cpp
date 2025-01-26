#include "modifyorcomposebook.h"
#include "ui_modifyorcomposebook.h"
#include <iostream>
#include <ostream>

ModifyOrComposeBook::ModifyOrComposeBook(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ModifyOrComposeBook)
{
    ui->setupUi(this);
}

ModifyOrComposeBook::~ModifyOrComposeBook()
{
    delete ui;
}

::book ModifyOrComposeBook::getBook() const
{
    return book;
}

void ModifyOrComposeBook::setB( class book newB)
{
    book = newB;
    ui->auorEditor->blockSignals(true);
    ui->auorEditor->setText(QString::fromStdString(book.getAuthors()));
    ui->auorEditor->blockSignals(false);

    ui->TtitleEdit->blockSignals(true);
    ui->TtitleEdit->setText(QString::fromStdString(book.getTitle()));
    ui->TtitleEdit->blockSignals(false);

    ui->descriptioNEdition->blockSignals(true);
    ui->descriptioNEdition->setText(QString::fromStdString(book.getDescription()));
    ui->descriptioNEdition->blockSignals(false);

    ui->pageEditor->blockSignals(true);
    ui->pageEditor->setText(QString::fromStdString(std::to_string(book.getProgress())));
    ui->pageEditor->blockSignals(false);

connect(ui->descriptioNEdition, &QTextEdit::textChanged, this, &ModifyOrComposeBook::onUpdateDescription);
    connect(ui->auorEditor, &QLineEdit::textChanged, this, &ModifyOrComposeBook::onUpdateAuthor);
    connect(ui->TtitleEdit, &QLineEdit::textChanged, this, &ModifyOrComposeBook::onUpdateTitle);
    connect(ui->pageEditor, &QLineEdit::textChanged, this, &ModifyOrComposeBook::onUpdateProgress);
    int count = 0;
    for(page p : book.getListPages()){
        QLineEdit* ql = new QLineEdit();
        ql->setText(QString::fromStdString(p.getUrl()));
        ui->listPages->addWidget(ql);
        connect(ql, &QLineEdit::textEdited, this, [this, p]() {
            this->toLaunchNewBook(b);
        });
    }




}

void ModifyOrComposeBook::onUpdateAuthor()
{
    book.setAuthors(ui->auorEditor->text().toStdString());
    book.update();
}

void ModifyOrComposeBook::onUpdateTitle()
{
    book.setTitle(ui->TtitleEdit->text().toStdString());
    book.update();
}

void ModifyOrComposeBook::onUpdateDescription()
{
    book.setDescription(ui->descriptioNEdition->toPlainText().toStdString());
    book.update();
}
inline bool not_digit2(char ch) {
    return '0' <= ch && ch <= '9';
}

std::string remove_non_digits2(const std::string& input) {
    std::string result;
    std::copy_if(input.begin(), input.end(),
                 std::back_inserter(result),
                 not_digit2);
    return result;
}


void ModifyOrComposeBook::onUpdateProgress()
{
    ui->pageEditor->blockSignals(true);
    QString currentText = ui->pageEditor->text();
    std::string str = currentText.toStdString();
    str = remove_non_digits2(str);

    try {
        int nValue = 0;
        if(!str.empty()){
            nValue = std::stoi(str);
        }else{
            str ="1";
        }
        if(nValue>book.getNumberPage()){
            nValue = book.getNumberPage();
        }
        if(nValue % 2 == 0){
            nValue--;
        }
        if(nValue < 1){
            nValue = 1;
        }

        book.setProgress(nValue);
        ui->pageEditor->setText(QString::fromStdString(str));
        book.update();
    }
    catch (int i) {
        // Block of code to handle errors
        std::cout<<"ha"<<std::endl;
    }
    ui->pageEditor->blockSignals(false);
}

void ModifyOrComposeBook::onEdditPage(page p, QLineEdit ql)
{
    p.setUrl(ql.text().toStdString());
}





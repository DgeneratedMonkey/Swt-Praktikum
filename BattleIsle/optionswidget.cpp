/*
 * Author: Manuel
 * Version: 0.2
 * Datum 04.12.2017
 */

#include "optionswidget.h"
#include "ui_optionswidget.h"

OptionsWidget::OptionsWidget(QWidget *parent, Options *ptr_Options) :
    QWidget(parent),
    ptr_optWidOptions(ptr_Options),
    ui(new Ui::OptionsWidget)
{
    ui->setupUi(this);
}

OptionsWidget::~OptionsWidget()
{
    delete ui;
}

void OptionsWidget::returnToStartMenue()
{
    emit SIGNAL_optChangeIndexFromStack(0);
}

void OptionsWidget::on_qbutton_apply_clicked()
{
    returnToStartMenue();
}

void OptionsWidget::on_qbutton_cancel_clicked()
{
    returnToStartMenue();
}

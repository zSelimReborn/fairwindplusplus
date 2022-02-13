//
// Created by Raffaele Montella on 15/01/22.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainPage.h" resolved

#include <FairWindSdk/PageBase.hpp>

#include "MainPage.hpp"
#include "ui_MainPage.h"

namespace fairwind::apps::radar {
    MainPage::MainPage(PageBase *parent) :
            PageBase(parent), ui(new Ui::MainPage) {

        ui->setupUi((QWidget *)this);
    }

    MainPage::~MainPage() {
        delete ui;
    }
} // fairwind::apps::radar

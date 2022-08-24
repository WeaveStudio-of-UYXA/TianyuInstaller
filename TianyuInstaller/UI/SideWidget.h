#pragma once
#include "../Base/Macro.h"
//The main content of this file is translated from the SideWidget.h in the C_SAT project of TsingYayin
//In view of the cross platform characteristics of this project, we have added some things related to platform identification

namespace TianyuUI {
	class SideWidget :public QFrame
	{Q_OBJECT
		Private QVBoxLayout* CurrentLayout;
		Private QRadioButton* HomePageButton;
		Public SideWidget(QWidget* parent = Q_NULLPTR) {
			this->setParent(parent);
			this->setObjectName("SideFrame");
			CurrentLayout = new QVBoxLayout(this);

			HomePageButton = new QRadioButton(this);
			HomePageButton->setStyleSheet("QRadioButton::indicator{width:0px;height:0px}");
			CurrentLayout->addWidget(HomePageButton);




		}
	};
}
//##########################################################################
//#                                                                        #
//#                       CLOUDCOMPARE PLUGIN: qDummy                      #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#                             COPYRIGHT: XXX                             #
//#                                                                        #
//##########################################################################

#ifndef Q_SAF_PLUGIN_HEADER
#define Q_SAF_PLUGIN_HEADER

//qCC
#include "../ccStdPluginInterface.h"

//! qSAF plugin
/**
 * Filter the scanning angle in a range of points
**/
class qSAF : public QObject, public ccStdPluginInterface
{
	Q_OBJECT
    Q_INTERFACES(ccStdPluginInterface)
	Q_PLUGIN_METADATA(IID "cccorp.cloudcompare.plugin.qSAF")

public:

	//! Default constructor
	explicit qSAF(QObject* parent = 0);

	//inherited from ccPluginInterface
    virtual QString getName() const override { return "SAF"; }
    virtual QString getDescription() const override { return "Filter the scanning angle in a range of points"; }
	virtual QIcon getIcon() const override;

	//inherited from ccStdPluginInterface
	void onNewSelection(const ccHObject::Container& selectedEntities) override;
	virtual void getActions(QActionGroup& group) override;

protected slots:

	void doAction();

protected:

	QAction* m_action;
};

#endif

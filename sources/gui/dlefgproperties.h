//
// $Source$
// $Date$
// $Revision$
//
// DESCRIPTION:
// Dialog for viewing and editing properties of an extensive form game
//

#ifndef DLEFGPROPERTIES_H
#define DLEFGPROPERTIES_H

class panelEfgGeneral;
class panelEfgPlayers;

class dialogEfgProperties : public wxDialog {
private:
  FullEfg &m_efg;
  panelEfgGeneral *m_generalPanel;
  panelEfgPlayers *m_playersPanel;

public:
  dialogEfgProperties(wxWindow *p_parent, FullEfg &p_efg, const wxString &);

};


#endif  // DLEFGPROPERTIES_H


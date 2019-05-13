class Resistances
{
private:
    int Racid;
    int Rcold;
    int Rfire;
    int Rlightning;
    int Rnecrotic;
    int Rpoison;
    int Rpsychic;
    int Rradiant;
    int Rthunder;
    int RmagicalWeapon;
    int Rbludgeoning;
    int Rslashing;
    int Rpiercing;
    int Rspells;

public:
    Resistances(/* args */);
    ~Resistances();
    void setResistAcid(int in) { Racid = in; }
    void setResistCold(int in) { Rcold = in; }
    void setResistFire(int in) { Rfire = in; }
    void setResistLightning(int in) { Rlightning = in; }
    void setResistNecrotic(int in) { Rnecrotic = in; }
    void setResistPoison(int in) { Rpoison = in; }
    void setResistPsychic(int in) { Rpsychic = in; }
    void setResistRadiant(int in) { Rradiant = in; }
    void setResistThunder(int in) { Rthunder = in; }
    void setResistMagicalWeapon(int in) { RmagicalWeapon = in; }
    void setResistBludgeoning(int in) { Rbludgeoning = in; }
    void setResistSlashing(int in) { Rslashing = in; }
    void setResistPiercing(int in) { Rpiercing = in; }
    void setResistSpells(int in) { Rspells = in; }

    int getResistAcid(void) { return Racid; }
    int getResistCold(void) { return Rcold; }
    int getResistFire(void) { return Rfire; }
    int getResistLightning(void) { return Rlightning; }
    int getResistNecrotic(void) { return Rnecrotic; }
    int getResistPoison(void) { return Rpoison; }
    int getResistPsychic(void) { return Rpsychic; }
    int getResistRadiant(void) { return Rradiant; }
    int getResistThunder(void) { return Rthunder; }
    int getResistMagicalWeapon(void) { return RmagicalWeapon; }
    int getResistBludgeoning(void) { return Rbludgeoning; }
    int getResistSlashing(void) { return Rslashing; }
    int getResistPiercing(void) { return Rpiercing; }
    int getResistSpells(void) { return Rspells; }
};

Resistances::Resistances(/* args */)
{
}

Resistances::~Resistances()
{
}

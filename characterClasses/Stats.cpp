class Stats
{
private:
    /* data */
    int strength;    // used to calculate carrying capacity, equiping weapons
    int dexterity;   // used for accuracy of attacks, equiping weapons
    int intelegence; // used for types of attacks
    int wisdom;
    int charisma;
    int endurance;
    int education;
    int agility;
    int alertness;
    int vitality;
    int willpower;
    int mind;
    int body;
    int soul;

public:
    Stats(/* args */);
    ~Stats();
    void setStrength(int in) { strength = in; }
    void setDexterity(int in) { dexterity = in; }
    void setIntelegence(int in) { intelegence = in; }
    void setWisdom(int in) { wisdom = in; }
    void setCharisma(int in) { charisma = in; }
    void setEndurance(int in) { endurance = in; }
    void setEducation(int in) { education = in; }
    void setAgility(int in) { agility = in; }
    void setAlertness(int in) { alertness = in; }
    void setVitality(int in) { vitality = in; }
    void setWillpower(int in) { willpower = in; }
    void setMind(int in) { mind = in; }
    void setBody(int in) { body = in; }
    void setSoul(int in) { soul = in; }

    int getStrength(void) { return strength; }
    int getDexterity(void) { return dexterity; }
    int getIntelegence(void) { return intelegence; }
    int getWisdom(void) { return wisdom; }
    int getCharisma(int in) { return charisma; }
    int getEndurance(void) { return endurance; }
    int getEducation(void) { return education; }
    int getAgility(void) { return agility; }
    int getAlertness(void) { return alertness; }
    int getVitality(void) { return vitality; }
    int getWillpower(void) { return willpower; }
    int getMind(void) { return mind; }
    int getBody(void) { return body; }
    int getSoul(int in) { return soul; }
};

Stats::Stats(/* args */)
{
    int n = 10;
    strength = n;
    dexterity = n;
    intelegence = n;
    wisdom = n;
    charisma = n;
    endurance = n;
    education = n;
    agility = n;
    alertness = n;
    vitality = n;
    willpower = n;
    mind = n;
    body = n;
    soul = n;
}

Stats::~Stats()
{
}

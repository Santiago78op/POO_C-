class athlete {
    virtual void upSpeed() {
        speed++;
        power--;
    }
};

class footballPlayer :public athlete {
    void upSpeed() override { speed += 3; power--; }
};

class swimmer : public athlete {    void upSpeed() { speed += 2; power--; }
};

class cycler : public athlete {
    void upSpeed() { speed += 7; power--; }
};

class runner : public athlete {
    void upSpeed() override { speed += 4; power--; }
};

class triathlete : public cycler,
                   public swimmer,
                   public runner {

    int personalMarathonRecord;
    char currentActivity[15] = "";

public:

    triathlete(int pmr) {
        personalMarathonRecord = pmr;
    }

    void setCurrentActivity(char ca[15]) { strcpy_s(currentActivity, ca); }
    char* getCurrentActivity() { return currentActivity; }
};

void loadAthlete(athlete* ath) {
    ath->setPower(100);
}

void main(){

    Pele.upSpeed();
    loadAthlete(&Pele);
    Pele.showAllAthleteAttributes();

    Usain.upSpeed();
    loadAthlete(&Usain);
    Usain.showAllAthleteAttributes();

    Indurain.upSpeed();
    loadAthlete(&Indurain);
    Indurain.showAllAthleteAttributes();

    Phelps.upSpeed();
    loadAthlete(&Phelps);
    Phelps.showAllAthleteAttributes();

    strcpy_s(aux, "SuperMan");
    triathlete SuperMan(2);
    SuperMan.swimmer::setSpeed(50);
    SuperMan.runner::showAllAthleteAttributes();

}
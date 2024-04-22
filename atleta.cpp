//
// Created by 72358 on 19/04/2024.
//
class footballPlayer :public athlete {

    char position[3];

    char team[15];

    int goals = 0;

    char sponsor[15];



public:

    footballPlayer(char p[3], char t[15], int g, char sp[15]) :athlete() {

        strcpy_s(position, p);

        strcpy_s(team, t);

        goals = g;

        strcpy_s(sponsor, sp);

    }

    footballPlayer(char p[3], char t[15], int g, char sp[15], int pw, int s, char n[15], float ph) {

        strcpy_s(position, p);

        strcpy_s(team, t);

        goals = g;

        strcpy_s(sponsor, sp);

        power = pw;

        speed = s;

        strcpy_s(name, n);

        phone = ph;

    }



    char* getSponsor() { return sponsor; }

    void setSponsor(char s[15]) { strcpy_s(sponsor, s); }



    //overload

    int getGoals() { return goals; }

    void upGoals() { goals++;  }

    void upGoals(int g) { goals += g; }





    void showFootballPlayerAttributes() {  cout << goals << " goals with " << team << " as " << position << endl; }

};







class swimmer : public athlete {

    int goldMedal;

    int silverMedal;

    int bronzeMedal;

    char style[15] = "";



public:

    swimmer() :athlete() {

        goldMedal = 0;

        silverMedal = 0;

        bronzeMedal = 0;

    }

    swimmer(int gm, int sm, int bm, int pw, int s, char n[15]) {

        goldMedal = gm;

        silverMedal = sm;

        bronzeMedal = bm;

        power = pw;

        speed = s;

        strcpy_s(name, n);

    }



    void setStyle(char s[15]) { strcpy_s(style, s); }

    char* getStyle() { return style; }



};





class cycler : public athlete {

    int medals;



public:

    cycler() :athlete() {

        medals = 0;

    }

    cycler(int m, int pw, int s, char n[15]) {

        medals = m;

        power = pw;

        speed = s;

        strcpy_s(name, n);

    }



    void eat(char f[15]) { cout << "eating " << f << endl;  }

};





class runner : public athlete {

    float maxSpeed;



public:

    runner() :athlete() {

        maxSpeed = 10;

    }

    runner(float ms, int pw, int s, char n[15]) {

        maxSpeed = ms;

        power = pw;

        speed = s;

        strcpy_s(name, n);

    }

    void setMaxSpeed(float ms) { maxSpeed = ms; }

    int getMaxSpeed() { return maxSpeed; }

};



void main(){



    char position[3];

    char team[15];

    char sponsor[15];



    strcpy_s(position, "FW");

    strcpy_s(team, "BR");

    strcpy_s(sponsor, "Adidas");

    strcpy_s(aux, "O Rey");

    footballPlayer Pele(position, team, 500, sponsor, 34, 12, aux, 7418);

    Pele.showAllAthleteAttributes();

    Pele.showFootballPlayerAttributes();



    Pele.upGoals();

    Pele.showFootballPlayerAttributes();

    Pele.upGoals(3);



    Pele.showAllAthleteAttributes();

    Pele.showFootballPlayerAttributes();

    //Pele.setPhone();





    strcpy_s(aux, "UsainRunner");

    runner Usain(40, 100, 20, aux);

    Usain.showAllAthleteAttributes();





    strcpy_s(aux, "Indurain");

    cycler Indurain(40, 100, 20, aux);

    Indurain.showAllAthleteAttributes();





    strcpy_s(aux, "M.Phelps");

    swimmer Phelps(0,0,0,100, 20, aux);

    Phelps.showAllAthleteAttributes();

}





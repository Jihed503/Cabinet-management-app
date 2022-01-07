#include <stdbool.h>

struct date{
int jour;
int mois;
int annee;
};
typedef struct date DATE;

struct heure{
int heures;
int minutes;
};
typedef struct heure HEURE;

struct adresse{
char rue[30];
int codepostale;
char ville[30];
};
typedef struct adresse  ADRESSE ;

struct rdv{
char nom_patient[30];
char nom_medecin[30];
DATE date_rdv;
HEURE heure_rdv;
};
typedef struct rdv RDV;


struct medicament{
char nom[30];
int code;
int prix_dt;
};
typedef struct medicament MED;

struct patient{
int code;
char nom[30];
char etat[30];
DATE date_naiss;
int num_tel;
ADRESSE residence;
MED med_actuel;
};
typedef struct patient PATIENT ;

struct medecin{
int code;
char nom[30];
char specialitee[30];
DATE date_naiss;
int num_tel;
ADRESSE adresse;
int prix_cons;
};
typedef struct medecin MEDECIN;

struct cabinet{

}







Rapport Mini Projet
Gestion d’un cabinet

Notre travail est réalisé par : 
•	Tawfik Brahim (Groupe B)
•	Jihed Selmi (Groupe B)
•	Hadil Bouneb (Groupe E)

Notre mini projet est un système de gestion d’un cabinet, il va aider le médecin à bien gérer son travail, en organisant les patients, leurs informations, leurs rendez-vous, leur état, etc...
Notre programme contient plusieurs structures et fonctions dans le but de simplifier la tache et pour que notre programme soit bien exécutable et lisible. 

Les structures :

•	DATE elle est constituée de :
 				       -      Jour (entier)
-	Mois (entier)
-	Année (entier)  

•	HEURE, elle est constituée de :
       -     Heures (entier)
-	 Minutes (entier)

•	RDV, elle est constituée de :   
       -      Date_rdv  (DATE )
-	 Heure_rdv (HEURE)

•	ADRESSE , elle est constituée de : 
				       -      Rue (chaine de caractères )
-	Ville (chaine de caractères )
-	Codepostale (entier) 

•	PATIENT, elle est constituée de :
-	Nom (chaine de caractères) 
-	Code (entier)
-	Date_naiss (DATE)
-	Num_tel (entier)
-	Adr (ADRESSE)
-	Etat (chaine de caractères)
-	Prochain_rdv (RDV) 

•	MEDECIN, elle est constituée de :
-	Nom (chaine de caractères) 
-	Code (entier)
-	Date_naiss (DATE)
-	Num_tel (entier)
-	Adr (ADRESSE)
-	Prix_cons (entier)
-	nb_patient (entier)
-	nb_possible_patient_par_jour (entier)
-	Patients (tableau dynamique de PATIENT)





Les fonctions :
•	 AfficherMenu
•	 saisir
•	 RechercherPatient
•	 modif_pat
•	supprimerPatient
•	mettreAjourInformations
•	 afficherunpatient
•	afficher_tous_patient
•	afficher_patient_Date
•	nb_patient_jour
•	ajouter_patient

Fonction AfficherMenu :
Cette fonction est appelée au début de programme, elle affiche un sommaire avec lequel l’utilisateur va savoir les opérations possibles avec notre système.
Enfin la fonction permet à l’utilisateur de choisir la commande qu’il veut faire en entrant le numéro de choix voulu au clavier  .

Fonction ajouter_patient:
Cette fonction a pour but d’ajouter un patient dans le tableau dynamique « medecin.patients ».
Elle prend comme paramètre le tableau dynamique, le nombre des patients ainsi que la date de rendez-vous de patient à ajouter.
Elle fait appel à la fonction nb_patient_jour pour vérifier si le médecin peut avoir plus des patients pour cette date.
Si oui le patient est ajouté, sinon le message « Le médecin ne peut plus avoir des patients pour cette date » s’affiche.

Fonction saisir :
Cette fonction a pour but de faciliter la saisie d’un entier.
 
Fonction RechercherPatient:
Cette fonction a pour but de vérifier si un patient donner existe ou non.
Elle prend en paramètre le code de patient, le tableau dynamique de patient et le nombres des patients.
Et elle donne la position de patient dans le tableau s’il existe, sinon elle return -1.
Cette fonction sera utile dans plusieurs fonctions dans la suite.


Fonction nb_patient_jour:
Le but de cette fonction est de déterminer le nombre des patients ayant un rendez-vous pour une date donner.
Elle prend en paramètre la date à saisir au clavier, le nombre des patients et le tableau dynamique des patients.
Cette fonction sera utile dans la fonction ajouter_patient. 

Fonction modif_pat:
Le rôle de cette fonction est de mettre à jour les détails d’un patient à partir d'un code entré au clavier.
En fait, elle prend comme paramètres le code de patient, un tableau dynamique des patients et sa longueur.
On vérifie d'abord si le patient avec le code donné existe déjà et ce avec l'appel de la fonction RechercherPatient .
Si le patient existe, on modifie l'état de patient et le prochain rendez-vous.
Sinon, la fonction affiche le message « Patient introuvable ! Svp vérifier les informations »


Fonction supprimerPatient :
Cette fonction a pour but de supprimer un patient à partir d'un code entré au clavier.
Elle prend comme paramètres le code de patient voulu, et une variable de type MEDECIN.
On vérifie d'abord si le patient avec le code donné existe déjà et ce avec l'appel de la fonction
RechercherPatient.
Si le patient existe, on supprime le patient en utilisant un variable aux et la fonction realloc .
Sinon, la fonction affiche le message « Patient introuvable ! Svp vérifier les informations »

Fonction mettreAjourInformations:
Cette fonction prend comme argument une variable de type MEDECIN.
 Son rôle est de modifier les informations de médecin dans la même variable.

Fonction afficherunpatient:
Le rôle de cette fonction est d’afficher les détails d’un seul patient : les informations personnelles ainsi que la date de prochain rendez-vous.
On fait entrer le code du patient et la fonction va faire appel à la fonction rechercherPatient qui utilise se code pour tester si ce patient existe (enregistré) ou non avant l’affichage 

Fonction afficher_tous_patient:
Dans cette fonction Tous les détails de tous les patients seront affichés en utilisant une boucle For.

Fonction afficher_patient_Date:
Le rôle de cette fonction est d’afficher les détails des patients qui ont un rendez-vous à une date donnée.
On fait entrer une date et la fonction va parcourir le tableau << medecin.patients >>qui est un tableau dynamique des patients et à chaque fois elle fait la comparaison entre la date de rendez-vous de chaque patient et la date saisie : si elle est la même elle va faire appel à la fonction <<afficherPatient>> pour afficher les détails de ce patient , sinon elle affiche le message « le patient …. n'a pas de rendez-vous »

Fonction saisir_ch :
Cette fonction a pour but de faciliter la saisie d’une chaine de caractère .


Fonction tri_patient :
En appelant cette fonction, le tableau dynamique des patient sera trier selon la date de rendez-vous , puis les information des patients trier seront afficher .
Cette fonction prend en paramètre le tableau dynamique « medecin.patients » ainsi que le nombre des patients et elle fait appel à la fonction afficher_tous_patient .








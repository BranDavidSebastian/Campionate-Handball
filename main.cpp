# include <iostream>
# include <vector>
# include <algorithm>
#include<string>
#include<math.h>

using namespace std;




int puncte (int victorii,int egaluri){

    int puncte;
    puncte = 3*victorii+egaluri;

    return puncte;

    }



struct Echipa{


    string numeEchipa;
    int poz;
    int valEchipa;
    int victorii;
    int infrangeri;
    int egaluri;
    int puncte;




    };




    bool ComparaEchipe(Echipa a, Echipa b)
{
    // If total marks are not same then
    // returns true for higher total
    if (a.puncte != b.puncte )
        return a.puncte > b.puncte;


}

// Fills total marks and ranks of all Students
void computeRanks(Echipa a[], int n)
{
    // To calculate total marks for all Students
    for (int i=0; i<n; i++)
        a[i].puncte = 3*(a[i].victorii) + a[i].egaluri;

    // Sort structure array using user defined
    // function compareTwoStudents()
    sort(a, a+n, ComparaEchipe);

    // Assigning ranks after sorting
    for (int i=0; i<n; i++)
        a[i].poz = i+1;
}

  bool ComparaEchipeVal(Echipa a, Echipa b)
{
    // If total marks are not same then
    // returns true for higher total
    if (a.valEchipa != b.valEchipa )
        return a.valEchipa > b.valEchipa;


}

void computeRanksVal(Echipa a[], int n)
{
    for (int i=0; i<n; i++)
        a[i].puncte = 3*(a[i].victorii) + a[i].egaluri;

    // function compareTwoStudents()
    sort(a, a+n, ComparaEchipeVal);

    // Assigning ranks after sorting
    for (int i=0; i<n; i++)
        a[i].poz = i+1;
}




int main(void)
{
 int alegere;
 int nrEchipe;
 int creat=0;
 string numeClasament;
	cout<< "CLASAMENTE HADNBALL ROMANIA\n";



repeat:
    if (creat ==1){

	cout<< "\nSelectati optiunea dumneavoastra:\n";
	cout<< "[1] Liga națională masculin\n[2] Liga națională feminin\n[3] Divizia A Masculin \n[4] Divizia A Feminin\n[5] Creare clasament \n[6] " << numeClasament <<  "\n";
	cout<< "Optiune aleasa: ";
	cin>> alegere;

    }
    else
    cout<< "\nSelectati optiunea dumneavoastra:\n";
	cout<< "[1] Liga națională masculin\n[2] Liga națională feminin\n[3] Divizia A Masculin \n[4] Divizia A Feminin\n[5] Creare clasament \n";
	cout<< "Optiune aleasa: ";
	cin>> alegere;



	int ale;
	if (alegere == 1){

        cout << "Vreti ca si calsamentul sa fie ordonat in functie de puncte sau valoarea echipei?\n";
        cout << "[1] Puncte \t [2] Valoarea echipei\n";
        cout<< "Optiune aleasa: ";
        cin >> ale;


	nrEchipe=14;

	Echipa a[nrEchipe];

	a[0].numeEchipa ="Dobrogea Sud";
	a[0].victorii = 21;
	a[0].egaluri = 1;
	a[0].infrangeri = 4;
	a[0].valEchipa = 15000000;




	a[1].numeEchipa ="D. București";
	a[1].victorii = 18;
	a[1].egaluri = 3;
	a[1].infrangeri = 5;
	a[1].valEchipa = 18000000;



	a[2].numeEchipa ="CSM Bucuresti";
	a[2].victorii = 18;
	a[2].egaluri = 2;
	a[2].infrangeri = 5;
	a[2].valEchipa = 13000000;

	a[3].numeEchipa ="Potaissa Turda";
	a[3].victorii = 16;
	a[3].egaluri = 4;
	a[3].infrangeri = 6;
	a[3].valEchipa = 10000000;

	a[4].numeEchipa ="Călăraşi";
	a[4].victorii = 16;
	a[4].egaluri = 3;
	a[4].infrangeri = 7;
	a[4].valEchipa = 9000000;

	a[5].numeEchipa ="S. București";
	a[5].victorii = 16;
	a[5].egaluri = 2;
	a[5].infrangeri = 7;
	a[5].valEchipa = 25000000;

	a[6].numeEchipa ="SCM Politehnica";
	a[6].victorii = 15;
	a[6].egaluri = 5;
	a[6].infrangeri = 6;
	a[6].valEchipa = 1500000;

	a[7].numeEchipa ="CSM Focsani";
	a[7].victorii = 12;
	a[7].egaluri = 2;
	a[7].infrangeri = 12;
	a[7].valEchipa = 8000000;

	a[8].numeEchipa ="M. Baia Mare";
	a[8].victorii = 9;
	a[8].egaluri = 3;
	a[8].infrangeri = 14;
	a[8].valEchipa = 7500000;

	a[9].numeEchipa ="Suceava\t";
	a[9].victorii = 7;
	a[9].egaluri = 2;
	a[9].infrangeri = 17;
	a[9].valEchipa = 5000000;

	a[10].numeEchipa ="CSM Fagaras";
	a[10].victorii = 7;
	a[10].egaluri = 1;
	a[10].infrangeri = 17;
	a[10].valEchipa = 3500000;

	a[11].numeEchipa ="Buzau\t";
	a[11].victorii = 6;
	a[11].egaluri = 1;
	a[11].infrangeri = 19;
	a[11].valEchipa = 950000;

	a[12].numeEchipa ="St. Bacau";
	a[12].victorii = 5;
	a[12].egaluri = 0;
	a[12].infrangeri = 21;
	a[12].valEchipa = 1000000;

	a[13].numeEchipa ="'U' Cluj";
	a[13].victorii = 0;
	a[13].egaluri = 0;
	a[13].infrangeri = 26;
	a[13].valEchipa = 500000;


        cout << "Poz"<< "\t";
        cout << "Nume Echipa" << "\t\t";
        cout << "V" << "\t";
        cout << "E" << "\t"
             << "I" << "\t"
             << "PCT" << "\t"
             << "VAL" << "\t";
        cout <<"\n";
     if (ale == 1){
	computeRanks(a , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << a[i].poz << "\t";
        cout << a[i].numeEchipa << "\t\t";
        cout << a[i].victorii << "\t";
        cout << a[i].egaluri << "\t"
             << a[i].infrangeri << "\t"
             << a[i].puncte << "\t"
             << a[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }
        if (ale == 2){
            computeRanksVal(a , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << a[i].poz << "\t";
        cout << a[i].numeEchipa << "\t\t";
        cout << a[i].victorii << "\t";
        cout << a[i].egaluri << "\t"
             << a[i].infrangeri << "\t"
             << a[i].puncte << "\t"
             << a[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }

        else cout << "Alegerea nu a fost introdusa corect!";

	}

	if (alegere == 2){

        cout << "Vreti ca si calsamentul sa fie ordonat in functie de puncte sau valoarea echipei?\n";
        cout << "[1] Puncte \t [2] Valoarea echipei\n";
        cout<< "Optiune aleasa: ";
        int alg;
        cin >> alg;


	nrEchipe=13;

	Echipa b[nrEchipe];

	b[0].numeEchipa ="Ramnicu Valcea";
	b[0].victorii = 21;
	b[0].egaluri = 0;
	b[0].infrangeri = 1;
	b[0].valEchipa = 20000000;




	b[1].numeEchipa ="CSM București";
	b[1].victorii = 20;
	b[1].egaluri = 0;
	b[1].infrangeri = 2;
	b[1].valEchipa = 22000000;



	b[2].numeEchipa ="Bistrita";
	b[2].victorii = 13;
	b[2].egaluri = 0;
	b[2].infrangeri = 9;
	b[2].valEchipa = 8000000;

	b[3].numeEchipa ="Corona Brasov";
	b[3].victorii = 12;
	b[3].egaluri = 1;
	b[3].infrangeri = 9;
	b[3].valEchipa = 9000000;

	b[4].numeEchipa ="SCM Craiova";
	b[4].victorii = 12;
	b[4].egaluri = 0;
	b[4].infrangeri = 10;
	b[4].valEchipa = 10000000;


	b[5].numeEchipa ="Mag. Cisnadiei";
	b[5].victorii = 11;
	b[5].egaluri = 2;
	b[5].infrangeri = 9;
	b[5].valEchipa = 1000000;

	b[6].numeEchipa ="Zalau\t";
	b[6].victorii =9;
	b[6].egaluri = 3;
	b[6].infrangeri = 10;
	b[6].valEchipa = 900000;


	b[7].numeEchipa ="Baia Mare";
	b[7].victorii = 9;
	b[7].egaluri = 1;
	b[7].infrangeri = 12;
	b[7].valEchipa = 1500000;

	b[8].numeEchipa ="Gloria Buzau";
	b[8].victorii = 8;
	b[8].egaluri = 3;
	b[8].infrangeri = 11;
	b[8].valEchipa = 500000;

	b[9].numeEchipa ="Dunarea Braila";
	b[9].victorii = 8;
	b[9].egaluri = 2;
	b[9].infrangeri = 12;
	b[9].valEchipa = 1500000;

	b[10].numeEchipa ="CSM Slatina";
	b[10].victorii = 8;
	b[10].egaluri = 1;
	b[10].infrangeri = 12;
	b[10].valEchipa = 950000;

	b[11].numeEchipa ="Danubius Galati";
	b[11].victorii = 1;
	b[11].egaluri = 2;
	b[11].infrangeri = 19;
	b[11].valEchipa = 100000;

	b[12].numeEchipa ="'U' Cluj";
	b[12].victorii = 4;
	b[12].egaluri = 0;
	b[12].infrangeri = 19;
	b[12].valEchipa = 800000;


        cout << "Poz"<< "\t";
        cout << "Nume Echipa" << "\t\t";
        cout << "V" << "\t";
        cout << "E" << "\t"
             << "I" << "\t"
             << "PCT" << "\t"
             << "VAL" << "\t";
        cout <<"\n";

     if (alg == 1){
	computeRanks(b , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << b[i].poz << "\t";
        cout << b[i].numeEchipa << "\t\t";
        cout << b[i].victorii << "\t";
        cout << b[i].egaluri << "\t"
             << b[i].infrangeri << "\t"
             << b[i].puncte << "\t"
             << b[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }
        else if (alg == 2){
            computeRanksVal(b , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << b[i].poz << "\t";
        cout << b[i].numeEchipa << "\t\t";
        cout << b[i].victorii << "\t";
        cout << b[i].egaluri << "\t"
             << b[i].infrangeri << "\t"
             << b[i].puncte << "\t"
             << b[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }

        else cout << "Alegerea nu a fost introdusa corect!";

	}

	if (alegere == 3){

        cout << "Vreti ca si calsamentul sa fie ordonat in functie de puncte sau valoarea echipei?\n";
        cout << "[1] Puncte \t [2] Valoarea echipei\n";
        cout<< "Optiune aleasa: ";
        int alg;
        cin >> alg;


	 nrEchipe=10;

	Echipa c[nrEchipe];

	c[0].numeEchipa ="CSM Bacau";
	c[0].victorii = 18;
	c[0].egaluri = 0;
	c[0].infrangeri = 0;
	c[0].valEchipa = 1000000;




	c[1].numeEchipa ="CS Buzau 2012";
	c[1].victorii = 14;
	c[1].egaluri = 1;
	c[1].infrangeri = 3;
	c[1].valEchipa = 900000;



	c[2].numeEchipa ="CSM Alexandria";
	c[2].victorii = 12;
	c[2].egaluri = 2;
	c[2].infrangeri = 4;
	c[2].valEchipa = 800000;

	c[3].numeEchipa ="CS Medgidia";
	c[3].victorii = 10;
	c[3].egaluri = 2;
	c[3].infrangeri = 6;
	c[3].valEchipa = 950000;

	c[4].numeEchipa ="Constanta II";
	c[4].victorii = 9;
	c[4].egaluri = 2;
	c[4].infrangeri = 7;
	c[4].valEchipa = 880000;


	c[5].numeEchipa ="CSU Galati";
	c[5].victorii = 9;
	c[5].egaluri = 0;
	c[5].infrangeri = 9;
	c[5].valEchipa = 700000;

	c[6].numeEchipa ="CSU CNOT Brasov";
	c[6].victorii =6;
	c[6].egaluri = 1;
	c[6].infrangeri = 11;
	c[6].valEchipa = 500000;


	c[7].numeEchipa ="Bucuresti DivA";
	c[7].victorii = 5;
	c[7].egaluri = 2;
	c[7].infrangeri = 11;
	c[7].valEchipa = 850000;

	c[8].numeEchipa ="CSU Targoviste";
	c[8].victorii = 2;
	c[8].egaluri = 0;
	c[8].infrangeri = 16;
	c[8].valEchipa = 130000;

	c[9].numeEchipa ="CSM Botosani";
	c[9].victorii = 0;
	c[9].egaluri = 0;
	c[9].infrangeri = 18;
	c[9].valEchipa = 90000;


        cout << "Poz"<< "\t";
        cout << "Nume Echipa" << "\t\t";
        cout << "V" << "\t";
        cout << "E" << "\t"
             << "I" << "\t"
             << "PCT" << "\t"
             << "VAL" << "\t";
        cout <<"\n";

     if (alg == 1){
	computeRanks(c , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << c[i].poz << "\t";
        cout << c[i].numeEchipa << "\t\t";
        cout << c[i].victorii << "\t";
        cout << c[i].egaluri << "\t"
             << c[i].infrangeri << "\t"
             << c[i].puncte << "\t"
             << c[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }
        else if (alg == 2){
            computeRanksVal(c , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << c[i].poz << "\t";
        cout << c[i].numeEchipa << "\t\t";
        cout << c[i].victorii << "\t";
        cout << c[i].egaluri << "\t"
             << c[i].infrangeri << "\t"
             << c[i].puncte << "\t"
             << c[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }

        else cout << "Alegerea nu a fost introdusa corect!";

	}
	if (alegere == 4){

            int alg;
       cout << "Ce divizie doriti sa accesati?\n";
         cout << "[1] Divizia A \t [2] Divizia B \t [3] Divizia C \t [4] Divizia D\n";
        cout<< "Optiune aleasa: ";
        cin >>alg;
        if (alg == 1){
        cout << "Vreti ca si calsamentul sa fie ordonat in functie de puncte sau valoarea echipei?\n";
        cout << "[1] Puncte \t [2] Valoarea echipei\n";
        cout<< "Optiune aleasa: ";
        cin >> alegere;


	 nrEchipe=15;

	Echipa d[nrEchipe];

	d[0].numeEchipa ="SCM Gloria Buzau";
	d[0].victorii = 28;
	d[0].egaluri = 0;
	d[0].infrangeri = 0;
	d[0].valEchipa = 1500000;



	d[1].numeEchipa ="CSU Neptun Constanta";
	d[1].victorii = 24;
	d[1].egaluri = 0;
	d[1].infrangeri = 4;
	d[1].valEchipa = 1800000;



	d[2].numeEchipa ="CSU Stiinta Bucurest";
	d[2].victorii = 20;
	d[2].egaluri = 2;
	d[2].infrangeri = 6;
	d[2].valEchipa = 1300000;

	d[3].numeEchipa ="CSM Bucuresti DivA";
	d[3].victorii = 19;
	d[3].egaluri = 2;
	d[3].infrangeri = 7;
	d[3].valEchipa = 1000000;


	d[4].numeEchipa ="HCF Piatra Neamt";
	d[4].victorii = 19;
	d[4].egaluri = 1;
	d[4].infrangeri = 8;
	d[4].valEchipa = 900000;

	d[5].numeEchipa ="Dinamo Bitcoin Buc.";
	d[5].victorii = 19;
	d[5].egaluri = 0;
	d[5].infrangeri = 9;
	d[5].valEchipa = 1400000;

	d[6].numeEchipa ="CSS Tulcea\t";
	d[6].victorii = 16;
	d[6].egaluri = 2;
	d[6].infrangeri = 10;
	d[6].valEchipa = 150000;

	d[7].numeEchipa ="CSA Steaua Bucuresti";
	d[7].victorii = 11;
	d[7].egaluri = 3;
	d[7].infrangeri = 14;
	d[7].valEchipa = 800000;

	d[8].numeEchipa ="ACS UAIC CNOT Iasi";
	d[8].victorii = 11;
	d[8].egaluri = 2;
	d[8].infrangeri = 15;
	d[8].valEchipa = 750000;

	d[9].numeEchipa ="CS Stiinta Bacau";
	d[9].victorii = 10;
	d[9].egaluri = 0;
	d[9].infrangeri = 18;
	d[9].valEchipa = 500000;

	d[10].numeEchipa ="HC Activ CSO Plopeni";
	d[10].victorii = 8;
	d[10].egaluri = 0;
	d[10].infrangeri = 20;
	d[10].valEchipa = 350000;

	d[11].numeEchipa ="ACS Sc. 181 Bucuresti";
	d[11].victorii = 7;
	d[11].egaluri = 1;
	d[11].infrangeri = 20;
	d[11].valEchipa = 95000;

	d[12].numeEchipa ="CSU Targoviste\t";
	d[12].victorii = 4;
	d[12].egaluri = 1;
	d[12].infrangeri = 23;
	d[12].valEchipa = 100000;

	d[13].numeEchipa ="CS Danubius Calarasi";
	d[13].victorii = 4;
	d[13].egaluri = 0;
	d[13].infrangeri = 24;
	d[13].valEchipa = 50000;

	d[14].numeEchipa ="ACS Spartac Bucuresti";
	d[14].victorii = 2;
	d[14].egaluri = 2;
	d[14].infrangeri = 24;
	d[14].valEchipa = 40000;


        cout << "Poz"<< "\t";
        cout << "Nume Echipa" << "\t\t\t";
        cout << " " << "\t";
        cout << "V" << "\t"
             << "E" << "\t"
             << "I" << "\t"
             << "PCT" << "\t"
              << "VAL" << "\t";
        cout <<"\n";
     if (alegere == 1){
	computeRanks(d , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << d[i].poz << "\t";
        cout << d[i].numeEchipa << "\t\t\t";
        cout << d[i].victorii << "\t";
        cout << d[i].egaluri << "\t"
             << d[i].infrangeri << "\t"
             << d[i].puncte << "\t"
             << d[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }
        else if (alegere == 2){
            computeRanksVal(d , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << d[i].poz << "\t";
        cout << d[i].numeEchipa << "\t\t\t";
        cout << d[i].victorii << "\t";
        cout << d[i].egaluri << "\t"
             << d[i].infrangeri << "\t"
             << d[i].puncte << "\t"
             << d[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }

        else cout << "Alegerea nu a fost introdusa corect!";

	}
	if (alg == 2){
        cout << "Vreti ca si calsamentul sa fie ordonat in functie de puncte sau valoarea echipei?\n";
        cout << "[1] Puncte \t [2] Valoarea echipei\n";
        cout<< "Optiune aleasa: ";
        cin >> alegere;


	nrEchipe=8;

	Echipa d[nrEchipe];

	d[0].numeEchipa ="CS Rapid Bucuresti";
	d[0].victorii = 26;
	d[0].egaluri = 1;
	d[0].infrangeri = 1;
	d[0].valEchipa = 150000;



	d[1].numeEchipa ="CSU Stiinta Bucuresti";
	d[1].victorii = 24;
	d[1].egaluri = 1;
	d[1].infrangeri = 3;
	d[1].valEchipa = 180000;



	d[2].numeEchipa ="Dinamo Bitcoin Buc.";
	d[2].victorii = 16;
	d[2].egaluri = 1;
	d[2].infrangeri = 11;
	d[2].valEchipa = 130000;

	d[3].numeEchipa ="CSM Bucuresti DivA";
	d[3].victorii = 15;
	d[3].egaluri = 0;
	d[3].infrangeri = 13;
	d[3].valEchipa = 100000;


	d[4].numeEchipa ="CSA Steaua Bucuresti";
	d[4].victorii = 13;
	d[4].egaluri = 1;
	d[4].infrangeri = 14;
	d[4].valEchipa = 5000000;

	d[5].numeEchipa ="ACS Sc.SSP Bucuresti";
	d[5].victorii = 11;
	d[5].egaluri = 0;
	d[5].infrangeri = 17;
	d[5].valEchipa = 140000;

	d[6].numeEchipa ="CS Danubius Calarasi";
	d[6].victorii = 4;
	d[6].egaluri = 0;
	d[6].infrangeri = 24;
	d[6].valEchipa = 90000;

	d[7].numeEchipa ="Spartac UNEFS Bucuresti";
	d[7].victorii = 1;
	d[7].egaluri = 0;
	d[7].infrangeri = 27;
	d[7].valEchipa = 100000;




        cout << "Poz"<< "\t";
        cout << "Nume Echipa" << "\t\t\t";
        cout << " " << "\t";
        cout << "V" << "\t"
             << "E" << "\t"
             << "I" << "\t"
             << "PCT" << "\t"
              << "VAL" << "\t";
        cout <<"\n";
     if (alegere == 1){
	computeRanks(d , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << d[i].poz << "\t";
        cout << d[i].numeEchipa << "\t\t\t";
        cout << d[i].victorii << "\t";
        cout << d[i].egaluri << "\t"
             << d[i].infrangeri << "\t"
             << d[i].puncte << "\t"
             << d[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }
        else if (alegere == 2){
            computeRanksVal(d , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << d[i].poz << "\t";
        cout << d[i].numeEchipa << "\t\t\t";
        cout << d[i].victorii << "\t";
        cout << d[i].egaluri << "\t"
             << d[i].infrangeri << "\t"
             << d[i].puncte << "\t"
             << d[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }

        else cout << "Alegerea nu a fost introdusa corect!";

	}
	if (alg == 3){
        cout << "Vreti ca si calsamentul sa fie ordonat in functie de puncte sau valoarea echipei?\n";
        cout << "[1] Puncte \t [2] Valoarea echipei\n";
        cout<< "Optiune aleasa: ";
        cin >> alegere;


	nrEchipe=7;

	Echipa d[nrEchipe];

	d[0].numeEchipa ="CS Dacia Mioveni 2012";
	d[0].victorii = 21;
	d[0].egaluri = 1;
	d[0].infrangeri = 2;
	d[0].valEchipa = 150000;



	d[1].numeEchipa ="HC Activ CSO Plopeni";
	d[1].victorii = 17;
	d[1].egaluri = 2;
	d[1].infrangeri = 5;
	d[1].valEchipa = 180000;



	d[2].numeEchipa ="FC Arges\t";
	d[2].victorii = 17;
	d[2].egaluri = 0;
	d[2].infrangeri = 7;
	d[2].valEchipa = 130000;

	d[3].numeEchipa ="National Rm Valcea";
	d[3].victorii = 15;
	d[3].egaluri = 1;
	d[3].infrangeri = 8;
	d[3].valEchipa = 100000;



	d[4].numeEchipa ="ACS Szekelyudvarhelyi";
	d[4].victorii = 6;
	d[4].egaluri = 0;
	d[4].infrangeri = 18;
	d[4].valEchipa = 140000;

	d[5].numeEchipa ="CSU Targoviste\t";
	d[5].victorii = 5;
	d[5].egaluri = 0;
	d[5].infrangeri = 19;
	d[5].valEchipa = 90000;

	d[6].numeEchipa ="LPS Tg Jiu\t";
	d[6].victorii = 1;
	d[6].egaluri = 0;
	d[6].infrangeri = 23;
	d[6].valEchipa = 100000;




        cout << "Poz"<< "\t";
        cout << "Nume Echipa" << "\t\t\t";
        cout << " " << "\t";
        cout << "V" << "\t"
             << "E" << "\t"
             << "I" << "\t"
             << "PCT" << "\t"
              << "VAL" << "\t";
        cout <<"\n";
     if (alegere == 1){
	computeRanks(d , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << d[i].poz << "\t";
        cout << d[i].numeEchipa << "\t\t\t";
        cout << d[i].victorii << "\t";
        cout << d[i].egaluri << "\t"
             << d[i].infrangeri << "\t"
             << d[i].puncte << "\t"
             << d[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }
        else if (alegere == 2){
            computeRanksVal(d , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << d[i].poz << "\t";
        cout << d[i].numeEchipa << "\t\t\t";
        cout << d[i].victorii << "\t";
        cout << d[i].egaluri << "\t"
             << d[i].infrangeri << "\t"
             << d[i].puncte << "\t"
             << d[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }

        else cout << "Alegerea nu a fost introdusa corect!";

	}

		if (alg == 4){
        cout << "Vreti ca si calsamentul sa fie ordonat in functie de puncte sau valoarea echipei?\n";
        cout << "[1] Puncte \t [2] Valoarea echipei\n";
        cout<< "Optiune aleasa: ";
        cin >> alegere;


	 nrEchipe=6;

	Echipa d[nrEchipe];

	d[0].numeEchipa ="CSM Tg Mures\t";
	d[0].victorii = 19;
	d[0].egaluri = 0;
	d[0].infrangeri = 1;
	d[0].valEchipa = 15000;



	d[1].numeEchipa ="ACS Crisul Chisineu";
	d[1].victorii = 12;
	d[1].egaluri = 2;
	d[1].infrangeri = 6;
	d[1].valEchipa = 18000;



	d[2].numeEchipa ="CSU Resita\t";
	d[2].victorii = 9;
	d[2].egaluri = 2;
	d[2].infrangeri = 9;
	d[2].valEchipa = 13000;

	d[3].numeEchipa ="CS Baia Mare DivA";
	d[3].victorii = 8;
	d[3].egaluri = 0;
	d[3].infrangeri = 12;
	d[3].valEchipa = 10000;



	d[4].numeEchipa ="CSU Oradea\t";
	d[4].victorii = 6;
	d[4].egaluri = 0;
	d[4].infrangeri = 14;
	d[4].valEchipa = 140000;

	d[5].numeEchipa ="CSU Timisoara\t";
	d[5].victorii = 4;
	d[5].egaluri = 0;
	d[5].infrangeri = 16;
	d[5].valEchipa = 90000;





        cout << "Poz"<< "\t";
        cout << "Nume Echipa" << "\t\t\t";
        cout << " " << "\t";
        cout << "V" << "\t"
             << "E" << "\t"
             << "I" << "\t"
             << "PCT" << "\t"
              << "VAL" << "\t";
        cout <<"\n";
     if (alegere == 1){
	computeRanks(d , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << d[i].poz << "\t";
        cout << d[i].numeEchipa << "\t\t\t";
        cout << d[i].victorii << "\t";
        cout << d[i].egaluri << "\t"
             << d[i].infrangeri << "\t"
             << d[i].puncte << "\t"
             << d[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }
        else if (alegere == 2){
            computeRanksVal(d , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << d[i].poz << "\t";
        cout << d[i].numeEchipa << "\t\t\t";
        cout << d[i].victorii << "\t";
        cout << d[i].egaluri << "\t"
             << d[i].infrangeri << "\t"
             << d[i].puncte << "\t"
             << d[i].valEchipa << "$\t";
        cout <<"\n";
    }

        }

        else cout << "Alegerea nu a fost introdusa corect!";

	}



	}


	if (alegere == 5 ){
 Echipa d[nrEchipe];



	cout << "Cum doriti sa se numeasca clasamentul?" << endl;
	cin >> numeClasament;
	cout << "Cate echipe doriti sa aiba clasamenutl?" << endl;
	cin >> nrEchipe;


	for (int i=0; i<nrEchipe; i++){

        cout << "Adaugati numele echipei cu numarul: " << i+1 << endl;
        cin >> d[i].numeEchipa;
        cout << "Adaugati victoriile echipei cu numarul: " << i+1 << endl;
        cin >> d[i].victorii;
        cout << "Adaugati egalurile echipei cu numarul: " << i+1 << endl;
        cin >> d[i].egaluri;
        cout << "Adaugati infrangerile echipei cu numarul: " << i+1 << endl;
        cin >> d[i].infrangeri;
        cout << "Adaugati valoarea echipei cu numarul: " << i+1 << endl;
        cin >> d[i].valEchipa;
        d[i].puncte= puncte(d[i].victorii, d[i].egaluri);

	}

cout << "Vreti ca si calsamentul sa fie ordonat in functie de puncte sau valoarea echipei?\n";
        cout << "[1] Puncte \t [2] Valoarea echipei\n";
        cout<< "Optiune aleasa: ";
        cin >> ale;

        cout << numeClasament << endl;
        cout << "Poz"<< "\t";
        cout << "Nume Echipa" << "\t";
        cout << " " << "\t";
        cout << "V" << "\t"
             << "E" << "\t"
             << "I" << "\t"
             << "PCT" << "\t"
              << "VAL" << "\t";
        cout <<"\n";
     if (ale == 1){
	computeRanks(d , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << d[i].poz << "\t";
        cout << d[i].numeEchipa << "\t\t\t";
        cout << d[i].victorii << "\t";
        cout << d[i].egaluri << "\t"
             << d[i].infrangeri << "\t"
             << d[i].puncte << "\t"
             << d[i].valEchipa << "$\t";
        cout <<"\n";
    }
    creat =1;

        }
        else if (ale == 2){
            computeRanksVal(d , nrEchipe );

		 for (int i=0; i<nrEchipe; i++)
    {
        cout << d[i].poz << "\t";
        cout << d[i].numeEchipa << "\t\t\t";
        cout << d[i].victorii << "\t";
        cout << d[i].egaluri << "\t"
             << d[i].infrangeri << "\t"
             << d[i].puncte << "\t"
             << d[i].valEchipa << "$\t";
        cout <<"\n";
    }
    creat = 1;

        }

        else {cout << "Alegerea nu a fost introdusa corect!";

	}




}



	cout<< "\n\nWould you like to do something else?\n";
	cout<< "Select an option:\n\n";
	cout<< "[1] Yes\n[2] No\n\n" << "Option selected: ";
	cin>>alegere;
	system ("CLS");
	if (alegere==1)
	{
		goto repeat;
	}
	else
	{
		end:
		system ("CLS");
		cout<< "\Adios";

		return 0;
	}
}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class file{
	ifstream plik;
	string a;
	string slowa;
	

public:
	
	void otworz();
	void znajdzSlowa();
	void szyfruj();


};
void file::otworz(){
	plik.open("text.txt");
	if(plik.good() == true)
    {
        while(!plik.eof())
        {
            getline(plik, a);
            cout << a << endl;
            
        }
        plik.close();
        
        ofstream wynik("wynik.txt");
          wynik<<a;
          cout<<a;
     
}
}

void file::znajdzSlowa(){
	for(int i=0; i<slowa; i++){
 	in >> S;
	 if (S[0]=='d' && S[S.length()-1]=='d')
 		out << S << endl;
}
}

void file::Szyfruj(){
for(int i=0; i<S.length(); i++)
{
 S[i] -= 'a';
 	S[i] = S[i]*5 + 2;
 		S[i] %= 26;
 			S[i] += 'a'; 
}
}
int main() {
	file plik;
	plik.otworz();
	plik.znajdzSlowa();
	plik.Szyfruj();
	
	return 0;
}

#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a+b)/2;
}

string status(double rata)
{
    if (rata >= 60)
        return "Lulus";
    else
        return "Gagal";
}

string status2(double rata, double nil){
    if (rata >= 60 || nil >= 70)
        return "Lulus";
    else
        return "Gagal";

}

int main(){
    double nilM,nilB;
    //double rata;
    //string st;
    cout << "masukan nilai matematika = ";
    cin >> nilM;
    cout << "masukan nilai bahasa indonesia = ";
    cin >> nilB;
    //rata = rerata(nilM,nilB);
    //st = status(rata);
    //cout << "status kelulusan = " << st;
    //cout << "status kelulusan = " << status(rata);
    cout << "status kelulusan = " << status(rerata(nilM,nilB));
    return 0;
}
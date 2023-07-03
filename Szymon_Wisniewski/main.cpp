#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void fill_progressive(vector<int> & a)
{
    for (int i = 0;i<a.size();i++)
    {
        a[i]=i+1;
    }
}

void print_vector(vector<int> a)
{
    for (int i =0;i<a.size();i++)
    {
        cout << a[i];
        if(i<a.size()-1)
        {
            cout << ", ";
        }
    }
}

void zad1()
{
    int a;
    cout << "Zadanie 1:\nPodaj dlugosc wektora: " << endl;
    cin >> a;
    vector<int> vec(a);
    fill_progressive(vec);
    print_vector(vec);
}

void min_max(vector<double> a, double &min, double &max)
{
    for(int i = 0;i<a.size();i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
        if(a[i]>max)
        {
            max = a[i];
        }
    }
}

void zad2()
{
    cout << "\nZadanie 2:\n";
    vector<double> values = {-1.0, 100, 3.14, -999.9, 21.37};
    double min=0, max=0;
    min_max(values, min, max);
    cout << "Max: " << max << " Min: " << min << endl;
}

uint64_t factorial(int a)
{
    uint64_t resoult=1;
    if(a==0)
    {
        resoult = 1;
    }
    else
    {
        for(int i =1;i<=a;i++)
        {
            resoult=resoult*i;
        }
    }

    return resoult;
}

void zad3()
{
    cout << "Zadanie 3:" << endl;
    uint64_t result = factorial(15);
    cout << result << endl;
}

uint64_t res = 1;

uint64_t factorial_r(int a)
{
    if(a<2) {
        return 1;
    }
    else return a*factorial_r(a-1);

    return res;
}



void zad4()
{
    cout << "zadanie 4:" << endl;
    uint64_t result = factorial_r(15);
    cout << result << endl;
}

bool is_prime(int a)
{
    for(int i =2;i<a;i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

void zad5()
{
    int min=0, max=0;
    cout << "Zadanie 5:\nPodaj dolny zakres: " << endl;
    cin >> min;
    cout << "Podaj gorny zakres: " << endl;
    cin >> max;
    for(int i =min;i<=max;i++)
    {
        if(i==1)
        {
            cout << "1 is either prime nor not prime!" << endl;
            continue;
        }
        int prime_or_not_prime = i;
        if (is_prime(prime_or_not_prime)) {
            cout << prime_or_not_prime << " is prime!" << endl;
        } else {
            cout << prime_or_not_prime << " is not prime!" << endl;
        }
    }
}

double pi_leibniz(double stop)
{
    double a=1.0;
    int j =0;
    for(int i =3;i<10000;i+=2)
    {
        double k = 1.0 / double(i);
        if(j%2 == 0 && k<stop/10)
        {
            break;
        }
        if(j%2 == 0)
        {
            a-=k;
        }
        else
        {
            a+=k;
        }
        j+=1;
    }
    return a*4;
}

void zad6()
{
    cout << "Zadanie 6:" << endl;
    double stop_at = 0.001;
    double pi_approx = pi_leibniz(stop_at);

    cout << pi_approx << endl;
    cout << "error: " << pi_approx - M_PI << endl;
}

void draw_square(int a, bool left_diagonal, bool right_diagonal)
{

    for(int i = 0;i<a;i++)
    {
        for(int j = 0;j<a;j++)
        {
            if((i==0)||(i==a-1))
            {
                cout << "#";
            }
            else if((j==a-1) || (j==0))
            {
                cout << "#";
            }
            else
            {
                if((left_diagonal == true && i == j) || (right_diagonal == true && i==a-j-1))
                {
                    cout << "#";
                }
                else
                {
                    cout << " ";
                }
            }


        }
        cout << endl;
    }
}

void zad7()
{
    cout << "Zadanie 7:" << endl;
    draw_square(10, true, false);
}

int gcd(int a, int b)
{
    double c=1.0;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;

    }
    return a;
}

void zad8()
{
    int a=0,b=0,nwd =0;
    cout << "Zadanie 8:\nPodaj liczbe a:" << endl;
    cin >> a;
    cout << "podaj liczbe b:" << endl;
    cin >> b;
    nwd = gcd(a,b);
    cout << "Nwd = " << nwd << endl;
}

int main()
{
    zad1();
    zad2();
    zad3();
    zad4();
    zad5();
    zad6();
    zad7();
    zad8();
    return 0;
}


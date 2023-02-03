#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int n = 1;
    double a, b, c, x, s, e, S = 0;
    cout << "Enter x and e: " << endl;
    cin >> x >> e;
    a = 1;
    b = x;
    c = 2;
    s = a*b/c;
      while (fabs(s) > e)
       {
            S += s;
            n++;
            a = -a;
            b *= x;
            c *= n+1;
            s = a*b/c;


        }
        cout << "s= " << S << endl;
    return 0;
}

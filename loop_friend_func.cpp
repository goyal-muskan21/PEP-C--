#include<bits/stdc++.h>
using namespace std;

class Distance {
     private:
     int feet;
     float inch;
     friend void increaseDistance(Distance);

     public:
     Distance(){
          feet = 0;
          inch = 0.0;
     }
};

void increaseDistance(Distance d) {
     d.feet++;
      d.inch += 0.1;
     cout<<"Feet: "<<d.feet<<endl;
     cout<<"Inch: "<<d.inch<<endl;
}

int main(){
     Distance d1;
     increaseDistance(d1);
}
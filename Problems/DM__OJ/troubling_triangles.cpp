#include <bits/stdc++.h>
using namespace std;

double dist(int x1, int y1, int x2, int y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(void) {
  // Number of Triangles
  int N;
  cin >> N;

  // Cordinates of triangles
  int a, b, c, d, e, f;
  double area, perim;

  while (N--) {
    cin >> a >> b >> c >> d >> e >> f;
    area = abs((a * (b - d) + c * (f - b) + e * (b - d)) / 2.0);
    perim = dist(a, b, c, d) + dist(c, d, e, f) + dist(a, b, e, f);

    cout << fixed << setprecision(2) << area << " " << perim << "\n";
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        int m; 
        cin >> m;
        vector<long long> points_arr;

        points_arr.push_back(0);
        for (int i = 0; i < m; i++) {
            long long points;
            cin >> points;
            points_arr.push_back(points);
        }
        points_arr.push_back(x);

        long long max_distance_between_points = LLONG_MIN;

        for (int i = 1; i < (int)points_arr.size(); i++) {
            if (i == (int)points_arr.size() - 1) {
                max_distance_between_points = max(
                    max_distance_between_points,
                    2 * (points_arr[i] - points_arr[i - 1])
                );
            } else {
                max_distance_between_points = max(
                    max_distance_between_points,
                    points_arr[i] - points_arr[i - 1]
                );
            }
        }

        cout << max_distance_between_points << endl;
    }
    return 0;
}

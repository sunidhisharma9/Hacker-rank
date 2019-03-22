#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
int maxX = 3;
 int maxY = 3;
 int total = -64;  // has to be -64, but
   
    // begin at y == 0
    for (int y = 0; y <= maxY; y++) {
        for (int x = 0; x <= maxX; x++) {
            // sum the top of hourglass
            int sum = arr[y][x] + arr[y][x+1] + arr[y][x+2];
            
            // get the middle of hourglass
            sum += arr[y+1][x+1];
            
            // sum the bottom of hourglass
            sum += arr[y+2][x] + arr[y+2][x+1] + arr[y+2][x+2];
            
            // don't store result to keep space complexity down
            if (total < sum)
                 total = sum;
        }
    }
    return total;



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

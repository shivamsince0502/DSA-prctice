#include <bits/stdc++.h>
#include <iostream>

using namespace std;
 
bitset<500001> Primes;

vector<int> Factors;
 

void SieveOfEratosthenes(int n)
{

    Primes[0] = 1;

    for (int i = 3; i <= n; i += 2) {

        if (Primes[i / 2] == 0) {

            for (int j = 3 * i; j <= n; j += 2 * i)

                Primes[j / 2] = 1;

        }

    }
 

    for (int i = 2; i <= 500001; i++) {

        if (!Primes[i])

            Factors.push_back(i);

    }
}
 


bool compare(const pair<int, int>& a,

             const pair<int, int>& b)
{

    return a.second > b.second;
}
 

int log_a_to_base_b(int a, int b)
{

    return log(a) / log(b);
}
 


int HighestPower(int N, int K)
{

    int start = 0, end = log_a_to_base_b(N, K);

    int ans = 0;

    while (start <= end) {
 

        int mid = start + (end - start) / 2;

        int temp = (int)(pow(K, mid));
 

        if (N % temp == 0) {

            ans = mid;

            start = mid + 1;

        }

        else {

            end = mid - 1;

        }

    }

    return ans;
}
 


void displayHighestOrder(int arr[], int N)
{

    vector<pair<int, int> > Nums;
 

    for (int i = 0; i < N; i++) {
 

    

        int temp = 1;

        for (auto& Prime : Factors) {
 

            

            if (Prime * Prime > arr[i])

                break;

            else if (arr[i] % Prime == 0)

                temp = max(

                    temp,

                    HighestPower(arr[i], Prime));

        }

        Nums.push_back(make_pair(arr[i], temp));

    }
 

    sort(Nums.begin(), Nums.end(), compare);
 

    for (int i = 0; i < N; i++) {

        cout << Nums[i].first << " ";

    }

    cout << endl;
}
 
// Driver Code

int main()
{
 

    SieveOfEratosthenes(500000);
 

    int arr[] = { 81, 25, 27, 32, 51 };
 

    int N = sizeof(arr) / sizeof(arr[0]);
 

    // Function Call

    displayHighestOrder(arr, N);
 

    return 0;
}
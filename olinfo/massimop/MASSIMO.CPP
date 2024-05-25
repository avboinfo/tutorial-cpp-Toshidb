#include <vector>
using namespace std;

int trova_massimo(int N, int V[])
{
    
    int max = V[0];
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {

            max = V[N];
        }

        if (V[N] > max)
            max = V[N];
    }
}
int main(){

}
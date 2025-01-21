#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

// Number of men or women
#define N 4

// This function returns true if woman 'w' prefers man 'm1' over man m
bool wPrefersM1OverM(int prefer[2*N][N], int w, int m, int m1)
{
    // Check if w prefers m over her current engagement m1
    for(int i=0; i<N; i++){
        // if m1 comes before m in list of w, then w
        // prefers her current engagement, don't do anything
        if(prefer[w][i]==m1)
            return true;

        // if m comes before m1 in w's list, then free her current
        // engagement and  engage her with m
        if(prefer[w][i]==m)
        return false;
    }
}

// Prints stable matching for N boys and N girls. Boys are numbered as 0to
// N-1. Girls are numbered as N to 2N-1.

void stableMarriage(int prefer[2*N][N])
{
    // Stores partner of women. This is our output array that
    // stores paing information. the value of wPartner[i] indicates
    // the partner assigned to woman N+i. Note that, the woman numberes
    // between N and 2N-1. The value -1 indicates that (N+i)'th woman is free.
    int wPartner[N];

    // An array to store availability of men. If mFree[i] is false,
    // then man 'i' is free, otherwise engaged.
    bool mFree[N];

    // Initialize all men and women as free
    memset(wPartner, -1, sizeof(wPartner));
    memset(mFree, false, sizeof(mFree));
    int freeCount = N;
    // While there are free men
    while(freeCount > 0)
    {
        // Pick the first free man (we could pick any)
        int m;
        for(m=0; m<N; m++)
            if(mFree[m]==false)
                break;
        // One by one go all women according to m's preferences.
        // Here m is the picked free man.
        for(int i=0; i<N && mFree[m]==false; i++){
            int w = prefer[m][i];

            // The woman of preference is free, w and m becomes
            // partners (Note that the partnership may be changed later.)
            // So we can say they are engaged not married.
            if(wPartner[w-N]==-1)
            {
                wPartner[w-N] = m;
                mFree[m] = true;
                freeCount--;
            }
            else // if w is not free
            {
                // Find current engagement of w
                int m1 = wPartner[w-N];

                // If w prefers m over her current engagement m1,
                // then break the engagement between w and m1 and
                // engage m wit w.
                if(wPrefersM1OverM(prefer, w, m, m1)==false)
                {
                    wPartner[w-N] = m;
                    mFree[m] = true;
                    mFree[m1] = false;
                }
            } // End of else
        } // End of the for loop that goes to all women in m's list
    } // End of main while loop
    // Print the solution
    cout << "Woman  Man" <<endl;
    for(int i=0; i<N; i++)
    {
        cout << " " << i+N << "\t" << wPartner[i]<<endl;
    }
}

int main()
{
    int prefer[2*N][N] =
    {
        {7, 5, 6, 4},
        {5, 4, 6, 7},
        {4, 5, 6, 7},
        {4, 5, 6, 7},
        {0, 1, 2, 3},
        {0, 1, 2, 3},
        {0, 1, 2, 3},
        {0, 1, 2, 3},
    };
    stableMarriage(prefer);

    return 0;
}

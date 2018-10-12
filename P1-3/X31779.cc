#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector <int> > Room;

// Pre: n, m integers greater than 0
// Post: it returns a valid n*m Room
Room read_room(int n, int m) {
    
    Room r(n,vector<int>(m));

	for(int i = 0; i<n; ++i)for(int j = 0; j<m; ++j)cin >> r[i][j];
	
	return r;
}

// Pre: room is a valid Room
// Post: it returns the value of those objects that are not monitored by any of the security cameras in room, no matter the final value of room
int non_monitored_objects(const Room& room) {
    
    int sum = 0;
	int r,c;
	r = room.size();
	c = room[0].size();
	Room myR(r,vector<int>(c));

	for(int i = 0; i<r; ++i){
		for(int j = 0; j<c; ++j){

			myR[i][j] = room[i][j];
		}
	}

	for(int i = 0; i<r; ++i){
		for(int j = 0; j<c; ++j){

			if(myR[i][j] == -1){

				for(int k = i; k<r; k++){
					for(int l = j; l<c; l++){
						myR[k][l] = 0;
					}
				}

			}sum += myR[i][j];
		}
	}


	return sum;

}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Room room = read_room(n, m);
        cout << non_monitored_objects(room) << endl;
    }
}
<pre><div class="text_to_html">#include &quot;temperature.h&quot;
#include &lt;iostream&gt;

using namespace std;

int printArray(int matrix[][M], int n, int m){
	for(int i=0; i&lt;n; i++){
		for(int j=0; j&lt;m; j++){
			cout &lt;&lt; matrix[i][j] &lt;&lt; &quot;\t&quot;;
		}
		cout &lt;&lt; endl;
	}
	return 0;
}

int fillArray(int matrix[][M], int n, int m){
	for(int i=0; i&lt;n; i++){
		for(int j=0; j&lt;m; j++){
			matrix[i][j] = rand()%40;
		}
	}
	return 0;
}


float avgTemperature(int matrix[][M], int n, int m){
	float sum = 0;
	for(int i=0; i&lt;n; i++){
		for(int j=0; j&lt;m; j++){
			sum += (float)matrix[i][j];
		}
	}
	return sum/(float)(n*m);
}

int dayMinAvgTemp(int matrix[][M], int n, int m){
	float avg = 0;
	float minAvg = RAND_MAX;
	int minDay = 0;
	int sum;
	for(int i=0; i&lt;n; i++){
		sum = 0;
		for(int j=0; j&lt;m; j++){
			sum += matrix[i][j];
		}
		avg = (float)sum/m;
		if(minAvg&gt;avg){
			minAvg = avg;
			minDay = i;
		}
	}
	return minDay;
}

int hourMaxTemp(int matrix[][M], int n, int m){
	int maxHour = 0;
	int maxTemp = matrix[0][0];
	for(int i=0; i&lt;n; i++){
		for(int j=0; j&lt;m; j++){
			if(maxTemp &lt; matrix[i][j]){
				maxTemp = matrix[i][j];
				maxHour = j;
			}
		}
	}
	return maxHour;
}

int numDaysZero(int matrix[][M], int n, int m){
	int cnt;
	for(int i=0; i&lt;n; i++){
		for(int j=0; j&lt;m; j++){
			if(matrix[i][j]==0){
				cnt++;
				break;
			}
		}
	}
	return cnt;
}</div></pre>
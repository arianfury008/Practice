#include <stdio.h>



// Arian khatiban
// Exercise 7-2
int main()
{

	int one[5]={192,48,206,37};
	int two[5]={147,90,312,21};
	int thr[5]={186,12,121,38};
	int four[5]={114,21,408,39};
	int fiv[5]= {267,13,382,29};
	printf("Precinct\tCandidate A\tCandidate B\tCandidate C\tCandidate D\n");

	int i;
	for(i=1;i<=5;i++)
	{
		printf("   %d",i);
		int p;
		for( p=0;p<4;p++)
		{
			if(i==1)printf("\t\t    %d",one[p]);
			if(i==2)printf("\t\t    %d",two[p]);
			if(i==3)printf("\t\t    %d",thr[p]);
			if(i==4)printf("\t\t    %d",four[p]);
			if(i==5)printf("\t\t    %d",fiv[p]);
		}
		printf("\n");
	}

	int q;
	for( q=1;q<=5;q++)
	{
		if(q==1)
		{
			int percent[5],sum=0;
			printf("\nResult in Precinct %d\n",q);

			int w;
			for(w=0;w<4;w++)
			{
				sum=sum+one[w];
			}

			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = one[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;

			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}

			if(lose==4)
			{
				int k;
				for(k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1])
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1])
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for(k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for(k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}

			else
			{
				int k;
				for(k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
		}
		if(q==2)
		{
			int percent[5],sum=0;
			printf("\nResult in Precinct %d\n",q);

			int w;
			for(w=0;w<4;w++)
			{
				sum=sum+two[w];
			}

			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = two[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;

			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}

			if(lose==4)
			{
				int k;
				for(k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1])
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1])
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for(k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for(k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}

			else
			{
				int k;
				for(k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
		}
		if(q==3)
		{
			int percent[5],sum=0;
			printf("\nResult in Precinct %d\n",q);

			int w;
			for(w=0;w<4;w++)
			{
				sum=sum+thr[w];
			}

			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = thr[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;

			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}

			if(lose==4)
			{
				int k;
				for(k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1])
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1])
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for(k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for(k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}

			else
			{
				int k;
				for(k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
		}
		if(q==4)
		{
			int percent[5],sum=0;
			printf("\nResult in Precinct %d\n",q);

			int w;
			for(w=0;w<4;w++)
			{
				sum=sum+four[w];
			}

			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = four[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;

			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}

			if(lose==4)
			{
				int k;
				for(k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1])
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1])
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for(k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for(k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}

			else
			{
				int k;
				for(k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
		}
		if(q==5)
		{
			int percent[5],sum=0;
			printf("\nResult in Precinct %d\n",q);

			int w;
			for(w=0;w<4;w++)
			{
				sum=sum+fiv[w];
			}

			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = fiv[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;

			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}

			if(lose==4)
			{
				int k;
				for(k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1])
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1])
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for(k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for(k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}

			else
			{
				int k;
				for(k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
		}

	}
			four[2]=108;
			int percent[5],sum=0;
			printf("\nResult in Precinct 4 (special case)\n");
			int w;
			for( w=0;w<4;w++)
			{
				sum=sum+four[w];
			}
			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = four[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;
			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}
			if(lose==4)
			{
				int k;
				for( k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1])
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1])
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for( k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for( k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}
			else
			{
				int k;
				for( k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
}


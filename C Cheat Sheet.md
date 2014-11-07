IEEE-CSU-Embedded-C
===================
#Include
  #include "stdio.h"

#Input (Scanf)
  scanf("%d", &Input);

#Output (Printf)
  printf("Even: %d\n", i);

#While Loop

	while (i <= n)
	{
		printf("Intup %d: ", i);
		scanf_s("%d", &num);
		sum += num;
		i++;
	}
	printf("The total sum = %d\n", sum);

	return 0;
}

#Do While Loop
int main(void)
{
	int x = 1;
	int i=0;

	do
	{
		x = x + 1;
		printf("%d", x);
		i++;
	} while (i < 10);

	return 0;
}

#For Loop

	for (i = 0; i <= 3; i++)
	{
		x = x + 1;
		printf("%d\n", x);
	}
	return 0;
}

#If Else Statement

	for (i = 0; i <= 10; i++)
	{
		if (i % 2 == 0)
			printf("Even: %d\n", i);
		else
			printf("Odd: %d\n", i);
	}
	return 0;
}

#Switch Statement
	grade = (score * 10) / 100; 

	switch (grade)
	{
	case 0: case 1: case 2: case 3: case 4: case 5: printf("Letter grade: F\n");
		break;
	case 6: printf("Letter grade: D\n");
		break;
	case 7: printf("Letter grade: C\n");
		break;
	case 8: printf("Letter grade: B\n");
		break;
	case 9: case 10: printf("Letter grade: A\n");
		break;
	}
	
#Break (Exiting a Loop)

	for (i = 0; i <= 10; i++)
	{
		if (i % 2 == 0)
			printf("Even: %d\n", i);
		else
			break;
	}
	return 0;
}

#Functions
  int average(int a, int b)
  {
    return (a + b)/ 2;
  }

  int main(void)
  {
	  int x, y, z;
	  printf("Enter your value: ");
	  scanf_s("%d %d %d", &x, &y, &z);
	  printf("%d %d %d\n", x, y, average(x, y));

	  return 0;
  }

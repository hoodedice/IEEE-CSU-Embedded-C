IEEE-CSU-Embedded-C
===================
++#While Loop

+ #include "stdafx.h"
+#include <stdio.h>

+int main(void)
+{
+	int i=1, sum =0, n, num;
+
+	printf("Enter a number of inputs: ");
+	scanf_s("%d", &n);
+
+	while (i <= n)
+	{
+		printf("Intup %d: ", i);
+		scanf_s("%d", &num);
+		sum += num;
+		i++;
+	}
+	printf("The total sum = %d\n", sum);
+
+	return 0;
+}




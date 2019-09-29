# <h1>program11</h1>
# <h2>1. Micro and Array Update</h2>
Micro purchased an array A having N integer values. After playing it for a while, he got 
bored of it and decided to update value of its element. In one second he can increase 
value of each array element by 1. He wants each array element's value to become greater 
than or equal to K. Please help Micro to find out the minimum amount of time it will take, 
for him to do so.
# <h3>Input:</h3>
First line consists of a single integer, T, denoting the number of test cases.
First line of each test case consists of two space separated integers denoting N and K.
Second line of each test case consists of N space separated integers denoting the array 
A.
# <h3>Output:</h3>
For each test case, print the minimum time in which all array elements will become 
greater than or equal to K. Print a new line after each test case.
# <h4>constraints</h4><br>
1<=T<=5<br>1<=N<=10<sup>5</sup><br>
1<=A[i],K<=10<sup>6</sup><br>
<table style="width:100%"> 
<tr> 
<th>SAMPLE INPUT</th> 
<th>SAMPLE OUTPUT</th> 
</tr> 
<tr>  
<td>2<br> 3 4<br> 1 2 5<br> 3 2<br>    2 5 5</td> 
<td>3<br>    0</td> 
</tr> 
</table>
<h2>2. Hamiltonian and Lagrangian </h2>
Students have become secret admirers of SEGP. They find the course exciting and the 
professors amusing. After a superb Mid Semester examination, it’s now time for the 
results. The TAs have released the marks of students in the form of an array, where arr[i] 
represents the marks of the ith student.
Since you are a curious kid, you want to find all the marks that are not smaller than those 
on its right side in the array.
# <h3>Input Format</h3>
The first line of input will contain a single integer n denoting the number of students.
The next line will contain n space separated integers representing the marks of students.
# <h3>Output Format</h3>
Output all the integers separated in the array from left to right that are not smaller than 
those on its right side.



# <h4>Constraints:</h4> 1 <= n <= 1000000<br> 0 <= arr[i] <= 10000<br> 
<table style="width:100%"> <tr>   <th>SAMPLE INPUT</th> 
  <th>SAMPLE OUTPUT</th> </tr> 
  <tr>   <tr>    <td>6<br>     16 17 4 3 5 2</td>  
  <td>17 5 2</td> 
  </tr> </table>
<h2>3. Frustrated coders </h2>
There are N frustrated coders standing in a circle with a gun in their hands. Each coder 
has a skill value S[ i ] and he can only kill those coders that have strictly less skill than 
him. One more thing, all the guns have only 1 bullet. This roulette can take place in 
any random order. Fortunately, you have the time stone (haaan wo harre wala) and 
you can see all possible outcomes of this scenario. Find the outcome where the total 
sum of the remaining coder's skill is minimum. Print this sum.
<h3>Input Format</h3>
The first line contains N the no. of coders
The next line contains N elements where the ith element is theS[ i ] of ith coder.
<h3>Output Format</h3>
Print a single line containing the minimum sum.
# <h4>Constraints</h4> 1<= N <= 1000000<br> 1<=S[ i ]<=1000<br> <table style="width:100%"> <tr> 
  <th>SAMPLE INPUT</th>   <th>SAMPLE OUTPUT</th>
  </tr>  <tr>    <td>6<br>      1 7 2 2 4 4</td> 
  <td>11</td>  </tr>  </table>

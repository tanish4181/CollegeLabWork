package jump;
class nestedBreak
{
public static void main(String[] args)
{
out:
for(int i=1; i<=100; i++)
{
  System.out.println("outer");
  for(int j=1; j<=100; j++)
  {
    System.out.println("nested");
    if(j==2)
    {
    // break; this will exit from inner for loop only
    break out; // this will exit from both for loops
    }
  }
}
}
}

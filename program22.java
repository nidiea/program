package program2;
import java.lang.Math;
public class program22 {
public static void main(String[] args) {
for(int i = 0;i < 30;i++)
{
int firNum = (int)(1 + Math.random()*99);//����1��99�������
int secNum = 1 + (int)(Math.random()*99);
int operaNum = 1 + (int)(Math.random()*4);//��1��4�ֱ����Ӽ��˳�
if(operaNum == 1)
{
System.out.println(firNum + "+" + secNum + "=?");
}
if(operaNum == 2)
{
System.out.println(firNum + "-" + secNum + "=?");
}
if(operaNum == 3)
{
System.out.println(firNum + "*" + secNum + "=?");
}
if(operaNum == 4)
{
if(secNum != 0)
{
System.out.println(firNum + "/" + secNum + "=?");
}
else if(firNum != 0)
{
System.out.println(secNum + "/" + firNum + "=?");
}
else
{
System.out.println(30 + "/" + 15 + "=?");
}
}
}
}
}

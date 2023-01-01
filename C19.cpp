#include <iostream>
#include <string.h>
using namespace std;
struct node
{
int prn, rollno;
char name[50];
struct node *next;
};
class info
{
node
*s = NULL,
*head1 = NULL, *temp1 = NULL, *head2 = NULL, *temp2 = NULL, *head = NULL, *temp = NULL;
int b, c, i, j, ct;
char a[20];

public:
node *create();
void insertp();
void insertm();
void delm();
void delp();
void dels();
Â  Â  void display();
Â  Â  void count();
Â  Â  void reverse();
Â  Â  void rev(node *p);
Â  Â  void concat();
};
node *info::create()
{
Â  Â  node *p = new (struct node);
Â  Â  cout << "enter name of student ";
Â  Â  cin >> a;
Â  Â  strcpy(p->name, a);
Â  Â  cout << "\nenter prn no. of student \n";
Â  Â  cin >> b;
Â  Â  p->prn = b;
Â  Â  cout << "enter student rollno";
Â  Â  cin >> c;
Â  Â  p->rollno = c;
Â  Â  p->next = NULL;
Â  Â  return p;
}
void info::insertm()
{
Â  Â  node *p = create();
Â  Â  if (head == NULL)
Â  Â  {
Â  Â  Â  Â  head = p;
Â  Â  }
Â  Â  else
Â  Â  {
Â  Â  Â  Â  temp = head;
Â  Â  Â  Â  while (temp->next != NULL)
Â  Â  Â  Â  {
Â  Â  Â  Â  Â  Â  temp = temp->next;
Â  Â  Â  Â  }
Â  Â  Â  Â  temp->next = p;
Â  Â  }
}
void info::insertp()
{
Â  Â  node *p = create();
Â  Â  if (head == NULL)
Â  Â  {
Â  Â  Â  Â  head = p;
Â  Â  }
Â  Â  else
Â  Â  {
Â  Â  Â  Â  temp = head;
Â  Â  Â  Â  head = p;
Â  Â  Â  Â  head->next = temp->next;
Â  Â  }
}
void info::display()
{
Â  Â  if (head == NULL)
Â  Â  {
Â  Â  Â  Â  cout << "linklist is empty";
Â  Â  }
Â  Â  else
Â  Â  {
Â  Â  Â  Â  temp = head;
Â  Â  Â  Â  cout << "prn rolln0 NAME \n";
Â  Â  Â  Â  while (temp->next != NULL)
Â  Â  Â  Â  {
Â  Â  Â  Â  Â  Â  cout << " \n"
Â  Â  Â  Â  Â  Â  Â  Â  Â << temp->prn << " " << temp -> rollno << " " << temp->name << "\n";
Â  Â  Â  Â  Â  Â  temp = temp->next;
Â  Â  Â  Â  }
Â  Â  Â  Â  cout << "" << temp->prn << " " << temp->rollno << " " << temp -> name << "\n";
Â  Â  }
}
void info::delm()
{
Â  Â  int m, f = 0;
Â  Â  cout << "\n enter the prn no. of student whose data you want to delete";
Â  Â  cin >> m;
Â  Â  temp = head;
Â  Â  while (temp->next != NULL)
Â  Â  {
Â  Â  Â  Â  if (temp->prn == m)
Â  Â  Â  Â  {
Â  Â  Â  Â  Â  Â  s->next = temp->next;
Â  Â  Â  Â  Â  Â  delete (temp);
Â  Â  Â  Â  Â  Â  f = 1;
Â  Â  Â  Â  }
Â  Â  Â  Â  s = temp;
Â  Â  Â  Â  temp = temp->next;
Â  Â  } Â  
Â  Â  if (f == 0)
Â  Â  {
Â  Â  Â  Â  cout << "\n sorry memeber not deleted ";
Â  Â  }
}
void info::delp()
{
Â  Â  temp = head;
Â  Â  head = head->next;
Â  Â  delete (temp);
}
void info::dels()
{
Â  Â  temp = head;
Â  Â  while (temp->next != NULL)
Â  Â  {
Â  Â  Â  Â  s = temp;
Â  Â  Â  Â  temp = temp->next;
Â  Â  }
Â  Â  s->next = NULL;
Â  Â  delete (temp);
}
void info::count()
{
Â  Â  temp = head;
Â  Â  ct = 0;
Â  Â  while (temp->next != NULL)
Â  Â  {
Â  Â  Â  Â  temp = temp->next;
Â  Â  Â  Â  ct++;
Â  Â  }
Â  Â  ct++;
Â  Â  cout << " Count of members is:" << ct;
}
void info::reverse()
{
Â  Â  rev(head);
}
void info::rev(node *temp)
{
Â  Â  if (temp == NULL)
Â  Â  {
Â  Â  Â  Â  return;
Â  Â  }
Â  Â  else
Â  Â  {
Â  Â  Â  Â  rev(temp->next);
Â  Â  }
Â  Â  cout << " " << temp->prn << " " << temp->rollno << " " << temp->name;
}
void info::concat()
{
Â  Â  int k, j;
Â  Â  cout << "enter no. of members in list1";
Â  Â  cin >> k;
Â  Â  head = NULL;
Â  Â  for (i = 0; i < k; i++)
Â  Â  {
Â  Â  Â  Â  insertm();
Â  Â  Â  Â  head1 = head;
Â  Â  }
Â  Â  head = NULL;
Â  Â  cout << "enter no. of members in list2";
Â  Â  cin >> j;
Â  Â  for (i = 0; i < j; i++)
Â  Â  {
Â  Â  Â  Â  insertm();
Â  Â  Â  Â  head2 = head;
Â  Â  }
Â  Â  head = NULL;
Â  Â  temp1 = head1;
Â  Â  while (temp1->next != NULL)
Â  Â  {
Â  Â  Â  Â  temp1 = temp1->next;
Â  Â  }
Â  Â  temp1->next = head2;
Â  Â  temp2 = head1;
Â  Â  cout << " prn rolln0 NAME \n";
Â  Â  while (temp2->next != NULL)
Â  Â  {
Â  Â  Â  Â  cout << "\n " << temp2->prn << " " << temp2 -> rollno << " " << temp2->name << "\n";
Â  Â  Â  Â  ;
Â  Â  Â  Â  temp2 = temp2->next;
Â  Â  }
Â  Â  cout << "\n " << temp2->prn << " " << temp2 -> rollno << " " << temp2->name << "\n";
}
int main()
{
Â  Â  info s;
Â  Â  int i;
Â  Â  char ch;
Â  Â  do
Â  Â  {
Â  Â  Â  Â  cout << "\n choice the options";
Â  Â  Â  Â  cout << "\n 1. To insert president ";
Â  Â  Â  Â  cout << "\n 2. To insert member ";
Â  Â  Â  Â  cout << "\n 3. To insert secretary ";
Â  Â  Â  Â  cout << "\n 4. To delete president ";
Â  Â  Â  Â  cout << "\n 5. To delete member ";
Â  Â  Â  Â  cout << "\n 6. To delete secretary ";
Â  Â  Â  Â  cout << "\n 7. To display data ";
Â  Â  Â  Â  cout << "\n 8. Count of members";
Â  Â  Â  Â  cout << "\n 9. To display reverse of string ";
Â  Â  Â  Â  cout << "\n 10.To concatenate two strings\n ";
Â  Â  Â  Â  cin >> i;
Â  Â  Â  Â  switch (i)
Â  Â  Â  Â  {
Â  Â  Â  Â  case 1:
Â  Â  Â  Â  Â  Â  s.insertp();
Â  Â  Â  Â  Â  Â  break;
Â  Â  Â  Â  case 2:
Â  Â  Â  Â  Â  Â  s.insertm();
Â  Â  Â  Â  Â  Â  break;
Â  Â  Â  Â  case 3:
Â  Â  Â  Â  Â  Â  s.insertm();
Â  Â  Â  Â  Â  Â  break;
Â  Â  Â  Â  case 4:
Â  Â  Â  Â  Â  Â  s.delp();
Â  Â  Â  Â  Â  Â  break;
Â  Â  Â  Â  case 5:
Â  Â  Â  Â  Â  Â  s.delm();
Â  Â  Â  Â  Â  Â  break;
Â  Â  Â  Â  case 6:
Â  Â  Â  Â  Â  Â  s.dels();
Â  Â  Â  Â  Â  Â  break;
Â  Â  Â  Â  case 7:
Â  Â  Â  Â  Â  Â  s.display();
Â  Â  Â  Â  Â  Â  break;
Â  Â  Â  Â  case 8:
Â  Â  Â  Â  Â  Â  s.count();
Â  Â  Â  Â  Â  Â  break;
Â  Â  Â  Â  case 9:
Â  Â  Â  Â  Â  Â  s.reverse();
Â  Â  Â  Â  Â  Â  break;
Â  Â  Â  Â  case 10:
Â  Â  Â  Â  Â  Â  s.concat();
Â  Â  Â  Â  Â  Â  break;
Â  Â  Â  Â  default:
Â  Â  Â  Â  Â  Â  cout << "\n unknown choice";
Â  Â  Â  Â  }
Â  Â  Â  Â  cout << "\n do you want to continue enter y/Y \n";
Â  Â  Â  Â  cin >> ch;
Â  Â  } while (ch == 'y' || ch == 'Y');
Â  Â  return 0;
}

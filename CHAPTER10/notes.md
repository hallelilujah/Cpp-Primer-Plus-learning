# 第十章 对象和类
## 10.2 抽象和类
类规范由两个部分组成：

1. 类声明：以数据成员的方式描述数据部分，以成员函数（被称为方法）的方式描述公有接口。

2.类方法定义：描述如何实现类成员函数。

C++程序员将接口（类定义）放在头文件中，将实现类方法的代码放在源代码文件中。

使用类对象的程序都可以直接访问公有部分，但只能通过公有成员函数来访问对象的私有成员。公有成员函数是程序和对象的私有成员之间的桥梁，提供了对象和程序之间的接口。防止程序直接访问数据被称为数据隐藏。

无论类成员是数据成员还是成员函数，都可以在类的公有部分或私有部分中声明它，但为了实现数据隐藏，数据项通常放在四有部分，组成类接口的成员函数放在公有部分。程序员会使用私有成员函数处理不属于公有接口的实现细节。

实现类成员函数：void Stock : : update(double price) 

要创建对象（类的实例），只需将类名视为类型名即可，类成员函数可通过类对象来调用，需要使用成员运算符句点
## 10.3 类的构造函数和析构函数
类构造函数：用于构造新对象、将值赋给它们的数据成员。

在创建类对象时被调用，其函数名与类名相同，通过函数重载可以创建多个同名的构造函数，构造函数没有声明类型
```
Stock a = Stock ("hhh",10,2);
Stock a("hhh",10,2);
Stock *pc = new Stock{"hhh",10,2};
```

默认构造函数没有参数，对于未被初始化的对象，程序将使用默认构造函数来创建。

析构函数：删除对象，没有返回类型，没有参数，名称为类名称前加~。
## 10.4 this指针
this指针指向用来调用成员函数的对象。每个成员函数（包括构造函数和析构函数）都有一个this指针。
 ```
 const Stock & function(...) const//将this限定为const，不能使用其修改对象的值
 {
 ...
 return *this;
 }
 ```

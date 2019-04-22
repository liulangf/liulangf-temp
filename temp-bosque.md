bosque
======

2019-04-19: 微软推出新语言Bosque，超越结构化程序设计


Bosque 是随着 Mark 发表的论文《Regularized Programming with the BOSQUE Language》提出的，论文中，作者指出上世纪 70 年代兴起的结构化程序设计和抽象数据类型使得开发者可以屏蔽掉底层硬件架构的特征，专注于编写功能代码，同时开发也变得更加不易出错.

而作者在此基础上，提出了一种新的程序设计思想——Regularized Programming（规范化/正则程序设计），通过避免低级循环动作的迭代处理、用代数数据转换操作符丰富语言等设计，超越结构化程序设计。

作者同时为此思想设计了全新的编程语言 Bosque。具体来讲，现有的程序设计得到简化，成为规范化形式，消除了主要的不确定复杂性来源。



# Accidental Complexity
Bosques 解决了意外复杂性（Accidental Complexity）的五大主要来源：

+ 可变状态和框架/Mutable State and Frames；
+ 循环、递归和不变量/Loops, Recursion, and Invariants；
+ 不确定性为/Indeterminate Behaviors；
+ 数据不变违规/Data Invariant Violations；
+ 相对和别名/Equality and Aliasing


# Regularized Programming Model
微软推出了一种名为Bosque的新编程语言。 根据语言开发人员Mark Barron的说法，新语言并没有遵循我们今天所知的许多传统程序语言模型。 相反，它选择了“正规化编程模型（Regularized Programming Model）”。据该公司称，它将提高开发人员的工作效率，软件质量，并使编译器和开发人员工具的发展成为黄金时代。

Bosques不需要'for'，'while'，'do while'循环，它以不同的方式接近条件。 微软推出了“Functors”，用于“循环”，可以提高软件质量。

# 结构化程序设计
结构化程序设计现在随处可见，不管你用的是 C/C++，还是 Java、Python 与 Golang 等编程语言，在开发过程中使用的基本都是这一程序设计思想，它最初是为了替换掉程序中弊大于利的 goto 语法而产生的。

研究者使用结构化程序设计思想中的循环、顺序与选择等设计，最终完全替换掉了 goto 指令，并且这样的编程思想也一直流行至今。

# resources
+ [Bosque](https://github.com/Microsoft/BosqueLanguage)

+ [regularized](https://www.microsoft.com/en-us/research/publication/regularized-programming-with-the-bosque-language/)
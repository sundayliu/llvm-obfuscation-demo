## 功能 ##

### Instructions Substitution ###

指令替换 -mllvm -sub

只应用在整数计算，支持加 减 与 或 异或

- 加(+) a = b + c
	- a = b - (-c)
	- a = -(-b + (-c))
	- r = rand();a=b+r;a=a+c;a=a-r
	- r = rand();a=b-r;a=a+b;a=a+r
- 减(-) a = b - c
	- a = b + (-c)
	- r = rand();a=b+r;a=a-c;a=a-r
	- r = rand();a=b-r;a=a-c;a=a+r
- 与(&) a = b & c
	- a = (b ^ ~c) & b
- 或(|) a = b | c
	- a = (b & c) | (b ^ c)
- 异或(^) a = a ^ b
	- a = (~a & b ) | (a & ~b)

相关公式推导

异或真值表

|Y       |B=0     |B=1     |
| :----: | :----: | :----: |
|A=0     |0       |1       |
|A=1     |1       |0       |

*Y = A ^ B = (~A & B) | (A & ~B)*

	Y = A & B = (A ^ ~B) & A
	= ((A & B) | (~A & ~B)) & A
	= (A & B & A) | (~A & ~B & A)
	= (A & A & B) | (~A & A & ~B)
	= (A & B) | (0 & ~B)
	= A & B 

Y = A | B = (A & B) | (A ^ B)

	(A & B) | (A ^ B)
	= (A & B) | (A & ~B) | (~A & B) 


### Bogus Control Flow ###

流程混淆：伪造控制流

### Control Flow Flattening ###

流程混淆：平展控制流

### Functions annotations ###

附注功能可以让某个函数使用（或不使用）一种或多种混淆功能。

使用伪控制流混淆

	int foo() __attribute__((__annotate__(("fla"))))
	{
		return 2;
	}

禁止使用伪控制流混淆

	int foo() __attribute__((_annotate__(("nofla"))))
	{
		return 2;
	}
### Functions merging ###

### Tamper proofing ###

### Constants encryption ###

### Junk code insertion ###

### Anti-debugging tricks insertion ###

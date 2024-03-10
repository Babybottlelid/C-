# CPlusPlus
##### ##此项目是一些关于C++相关的注意知识点。

```json
#可能有相关特性代码，demo，相关面试，
#相关具体实现
#参考了C++那些事儿的开源练习
```



##### 项目练习顺序:

```c++
1.baic_content/const //const 相关的知识点，也是面试的高频拷问点
    
```

##### Vs+Qt程序打包发布步骤

```C++
1.Vs下切换至Release模式运行；生成 .exe文件,见生成的exe文件拷贝至新建好的打包文件夹中；

2.打开Qt动态库，打开Qt 5.14.2(msvc 2017 64-bit) ,使用cd  命令进入打包好的文件夹中
    执行 windeployqt ***.exe; 完成qt打包的动态库
3.拷贝其他动态库：
       打开 Vs2017 x64 本机命令提示符 使用cd  命令进入打包好的文件夹中
       执行 dumpbin /IMPORT ***.exe > output.txt 会在打包文件夹生成output.txt 会看到可执行文件调用的所有动态库，找到所有的*.dll;复制到打包文件夹，可使用everthing工具
4.除去上诉需要的*.dll；还需要系统依赖的其他库文件。搜索出来文件可能会有很多，一般选择有wndows/system32那个选这个
           还有:Program Files(x86)\windows Kits\10\Redis\10.0.22000.0\ucrt\DLLs\x64
               
  在64位系统中，发布拷贝依赖的dill库仍然是从system32下拷贝
5.电脑装载相应的SDK kit环境依赖时，我们将程序发布的自己电脑的SDK生成的dill库拷贝到程序的相同目录
    
```


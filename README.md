# CloudCompare-Qt

基于[CloudCompare](https://github.com/CloudCompare/CloudCompare)官方源码构建的第三方Qt工程，直接可用Qt打开，修改好你的`.pro`文件库路径即可运行，无需Visual Studio，无需CMake，支持Windows、MacOS、Linux。

* 构建时间：2017/03/01
* 构建版本：~~好像是~~ CloudCompare Version 2.8.0
* 作者：Kenny Liu、[Eric](https://github.com/Eric7Coding)、[Menghui Xie](https://github.com/huihut)

## 附加第三方插件

### 扫描角度过滤插件：qSAF

* 本仓库路径：[qSAF](CloudCompare/plugins/qSAF)
* 原仓库路径：[qSAF](https://github.com/huihut/qSAF)

## CloudCompare开发环境配置 (CentOS)

1. 安装Qt5/gcc/g++

2. 安装OpenGL库


    	# 列出所有可用的mesa包
    	sudo yum list mesa*

    	# 安装如下可用的mesa包
    	sudo yum install -y mesa-libGL-devel mesa-libGLU-devel

    	# 如出现错误：
    	# /usr/bin/ld: skipping incompatible /usr/lib/gcc/x86_64-redhat-linux/4.8.2/../.
    	# ./../libGL.so when searching for -lGL
    	# /usr/bin/ld: skipping incompatible /lib/libGL.so when searching for -lGL
    	# /usr/bin/ld: skipping incompatible /usr/lib/libGL.so when searching for -lGL
    	# /usr/bin/ld: cannot find -lGL
    	# 请检查 libGL.so 的连接指向是否出现错误，如有就使用ln -sfn 命令修复（具体修复请考虑自己环境中gl安装情况），下面仅供参考
    	ln -sfn /usr/lib64/libGL.so.1 /usr/lib64/libGL.so.1

3. qCC_io工程需要安装liblas依赖库，安装如下：

    	# 检索liblas库
    	sudo yum search liblas

    	# 安装liblas
    	sudo yum install -y liblas liblas-devel

4. qCC_io工程需要安装gdal依赖库，安装如下：

    	# 检索gdal库
    	sudo yum search gdal

    	# 安装gdal
    	sudo yum install -y gdal gdal-devel

5. qCC工程需要安装pcl依赖库，安装如下：

    	# 检索pcl库
    	sudo yum search pcl

    	# 安装pcl
    	sudo yum install -y pcl pcl-devel

6. 安装boost依赖库，安装如下：

    	# 检索boost库
    	sudo yum search boost

    	# 安装boost
    	sudo yum install -y boost boost-devel

7. 修改项目中 `.pro` 文件的 `unix:!macx` 中库路径为适合你环境的路径

## CloudCompare开发环境配置 (MacOS)

1. 安装 `Homebrew` 包管理器

		# 查看是否装有Homebrew
		brew -v
		
		# 没有则安装
		/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
		
	详见官网：[Homebrew](https://brew.sh/index_zh-cn.html)

2. 用 `Homebrew` 安装库

		# 更新源
		brew update
		
		# 只需安装下图与项目有关的库
		# 安装命令如：
		brew install boost

	![brew_lib](http://ojlsgreog.bkt.clouddn.com/brew_lib.jpg)

3. 修改项目中 `.pro` 文件的 `macx` 中库路径，即

		macx
		{
		
		#boost
		INCLUDEPATH +=  /usr/local/Cellar/boost/1.62.0/include
		
		……
		
		}
		
	改为自己库的路径



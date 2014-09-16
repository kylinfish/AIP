AIP
------------

Image processing with opencv (C++)

IP1(visual studio C++)
------------

1.RW image
```
Reading and showing a color image
Transferring the color image to a gray image
```
2.Transform intensity
```
Transforming the 256-level gray image into 128, 64,and 32 intensity level
```
![histogram](https://github.com/kylinfish/AIP/blob/master/p4.png)
3.Resize image
```
  Resizing the 256-level gray image into a 64X image using 
  。[the nearest neighbor interpolation], 
  。[the bilinearinterpolation], 
  。[the bicubic interpolation],respectively
  created date:2013/10/01
```
IP2 (Xcode)
------------
1.Spatial filtering 
``` 
apply averageing, median filters.
apply image **sharpening** based on Laplacian mask and **unsharp** masking .
created on 2013/11/12.
```
reference: http://blog.csdn.net/huangli19870217/article/details/12942759
![Filter](https://github.com/kylinfish/AIP/blob/master/p1.png)
2.Frequency domain filtering (low)
```
 Apply **ILPF,BLPF,GLPF** to an input image .
 created on 2013/11/12.
 Copyright (c) 60247059s chen-lin-yu. All rights reserved.
```
reference: http://blog.csdn.net/huangli19870217/article/details/12942759
![low pass](https://github.com/kylinfish/AIP/blob/master/p2.png)

3.Frequency domain filtering (hight)
```
Apply IHPF,BHPF,GHPF to an input image.
created on 2013/11/12.
```
reference: http://blog.csdn.net/huangli19870217/article/details/12942759
![high pass](https://github.com/kylinfish/AIP/blob/master/p3.png)

PS.
------------

You may want to change FILEPATH to you test image's location
I've edit the Scheme's working directory to $(SRCROOT)
####IP2 Created on MacOS 10.9 Xcode 5.0



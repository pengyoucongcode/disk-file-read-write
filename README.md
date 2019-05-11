# disk-file-read-write
## explain
* This program realizes the read-write operation of disk file, for example, read the student's score information from scores.txt by line.
* The student information in the file is as follows
```
姓名	数学分析	高等代数	解析几何
张红	78	94	90
李丽君	65	73	82
成平	94	68	78
王伟	84	86	69
文锦春	74	92	60
林黛玉	66	83	70
付凌云	88	79	82
岳不群	90	82	93
令狐冲	81	77	97
温玉琪	95	84	68
胡建军	85	73	75
刘汉	90	87	89
秋昌平	83	71	74
秦敖天	96	92	95
方世杰	83	90	88
```
* The next action is to store each line of student information read in the structure studentInfo
* Then the data in the structure are used to calculate the average score of the course and the average score of each person.
* The average scores of the courses and the average scores of the students are written into the scoresAnalysis.txt file in a certain format.
* The situation in the scoresAnalysis.txt file is as follows
```
姓名		数学分析	高等代数 	解析几何	平均成绩
张红		78		94		90		87.3
李丽君		65		73		82		73.3
成平		94		68		78		80.0
王伟		84		86		69		79.7
文锦春		74		92		60		75.3
林黛玉		66		83		70		73.0
付凌云		88		79		82		83.0
岳不群		90		82		93		88.3
令狐冲		81		77		97		85.0
温玉琪		95		84		68		82.3
胡建军		85		73		75		77.7
刘汉		90		87		89		88.7
秋昌平		83		71		74		76.0
秦敖天		96		92		95		94.3
方世杰		83		90		88		87.0
各科平均成绩	83.5		82.2		80.7
```
* The last step is to use the file pointer to read and display the contents of the scoresAnalysis.txt by row to the console window
## Edi.disk-file-read-write
* Add disk-file-read-write in .NET Core
https://docs.microsoft.com/azure/devops/pipelines/apps/windows/dot-net

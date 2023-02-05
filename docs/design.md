<h1>Terminator Timer</h1>

<h3><i>Version 0.0.1</i></h3>
<br>
<h2>Functionality</h2>
<b>Terminator timer</b> is a unitily that tracks time when user needs this. Terminator timer takes place in the linux terminator. Terminator timer has an terminator interface for user to be able to use next features:

<li>Start and stop timer</li>
User can stop or start timer using terminator.
<li>Enter needed time</li>
    User can enter time for example instead of

    Timer time = 01:56:23
    User: enter time manually 05:00:00
    Timer time = 05:00:00

<li>Add or sub mins/hours</li>
User can add or subtract time by mins and hours

    Timer time = 02:23:30
    User: add 10 mins
    Timer time = 02:33:30

    Timer time = 02:23:30
    User: sub 10 mins
    Timer time = 02:13:30

    Where <b>10</b> is a variable with range 1...60

<li>Save time by the day into the log file</li>
Terminator timer creates log file where time by the end of a day is written. User can open file to see info.

<li>Timer gives an output of statistic</li>
User can view statistics for every category in the timer menu.

<li>Timer categories</li>
User can create a category for which to count time, category is written in the log file and in the timer menu.

<br>
<h2>Design</h2>


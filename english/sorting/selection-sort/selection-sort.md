## Selection Sort

The selection sort at each step, the vector is traversed in order to select the lowest value and place it in the first position of the vector. Now that the first position is already ordered, discard it and repeat the process for the second position, this is done for all positions of the vector.

#### Unordered vector
Example of execution of the algorithm selection sort with a vector of 6 positions.

<p align="center">
  <img src="/images/selection-sort/selection01.png">
</p>

#### 1º Step
Starting from the first position, the entire vector is scanned comparing each position to find the lowest value.
In this case, the lowest value is 20, we select it.

<p align="center">
  <img src="/images/selection-sort/selection02.png">
</p>

#### 2º Step
We exchange the value from the first position the 103 with the smaller that's 20.

<p align="center">
  <img src="/images/selection-sort/selection03.png">
</p>

#### 3º Step
First position of the vector is ordered, we move to the next one.

<p align="center">
  <img src="/images/selection-sort/selection04.png">
</p>

#### 4º Step

<p align="center">
  <img src="/images/selection-sort/selection05.png">
</p>

#### 5º Step


<p align="center">
  <img src="/images/selection-sort/selection06.png">
</p>

#### 6º Step


<p align="center">
  <img src="/images/selection-sort/selection07.png">
</p>

#### 7º Step


<p align="center">
  <img src="/images/selection-sort/selection08.png">
</p>

#### 8º Step


<p align="center">
  <img src="/images/selection-sort/selection09.png">
</p>

#### 9º Step


<p align="center">
  <img src="/images/selection-sort/selection10.png">
</p>

#### 10º Step

<p align="center">
  <img src="/images/selection-sort/selection11.png">
</p>

#### 11º Step

<p align="center">
  <img src="/images/selection-sort/selection12.png">
</p>

#### 12º Step

<p align="center">
  <img src="/images/selection-sort/selection13.png">
</p>

#### 13º Step


<p align="center">
  <img src="/images/selection-sort/selection14.png">
</p>

#### 14º Step

<p align="center">
  <img src="/images/selection-sort/selection15.png">
</p>

#### 15º Step


<p align="center">
  <img src="/images/selection-sort/selection16.png">
</p>

#### 16º Step

<p align="center">
  <img src="/images/selection-sort/selection17.png">
</p>

## Complexity

The selection sort compares each interaction one element with the other, aiming to find the lowest. In this way, we can understand that there is no better case even if the vector is ordered in reverse order the two loops of the algorithm, the external and the internal, will be executed, and the complexity of this algorithm will always be **O(n²)**.

## Advantage

* It is a simple algorithm to be implemented in comparison to the others.
* You don't need an auxiliary vector.
* By not using an auxiliary vector to perform sorting, it takes up less memory.
* It is one of the fastest in ordering small-sized vectors.


## Disadvantage









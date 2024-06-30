/**
 * ENGG1110 Problem Solving by Programming
 *
 * I declare that the assignment here submitted is original
 * except for source material explicitly acknowledged,
 * and that the same or closely related material has not been
 * previously submitted for another course.
 * I also acknowledge that I am aware of University policy and
 * regulations on honesty in academic work, and of the disciplinary
 * guidelines and procedures applicable to breaches of such
 * policy and regulations, as contained in the website.
 *
 * University Guideline on Academic Honesty:
 *   http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : xxx <fill in yourself>
 * Student ID   : xxx <fill in yourself>
 * Class/Section: A/B/C/D
 * Date         :
 */

#include <stdio.h>

int main(void) {

  // the start of the program is given to you as hint
  // you don't need to change anything
  int ppl;
  printf("Input number of people: ");
  scanf("%d", &ppl);
  float cost, tips;
  printf("Input cost of meal: ");
  scanf("%f", &cost);
  printf("Input tips: ");
  scanf("%f", &tips);
  printf("Everyone pays: %.2f", (cost + tips) / ppl);

  // please insert the rest of your code here

  return 0;
}
import * as readline from "readline";

function binarySearchCap(budgets: number[], totalBudget: number): number {
  let start = 0; // Start point
  let end = Math.max(...budgets); // End point

  while (start <= end) {
    const mid = Math.floor((start + end) / 2); // Set the midpoint as the cap

    // Calculate the sum of budgets allocated with the cap
    const allocatedBudgets = budgets.reduce(
      (sum, budget) => sum + Math.min(budget, mid),
      0
    );

    // If the sum of allocated budgets is less than or equal to the total budget, increase the cap
    if (allocatedBudgets <= totalBudget) {
      start = mid + 1;
    }
    // If the sum of allocated budgets exceeds the total budget, decrease the cap
    else {
      end = mid - 1;
    }
  }

  return end; // Return the cap
}

function allocateBudgets(): void {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  });

  let N: number; // Number of regions
  let budgets: number[]; // Budget requests for each region
  let M: number; // Total budget

  rl.question("Number of regions: ", (n) => {
    N = parseInt(n);
    rl.question("Budget requests: ", (requests) => {
      budgets = requests.split(" ").map((budget) => parseInt(budget));
      rl.question("Total budget: ", (total) => {
        M = parseInt(total);
        rl.close();

        // Calculate the sum of budget requests
        const totalBudgets = budgets.reduce((sum, budget) => sum + budget, 0);

        // If the sum of budget requests is less than or equal to the total budget
        if (totalBudgets <= M) {
          console.log(Math.max(...budgets)); // Print the maximum budget request
        } else {
          const cap = binarySearchCap(budgets, M);
          console.log(cap); // Print the cap
        }
      });
    });
  });
}

// Run the function
allocateBudgets();

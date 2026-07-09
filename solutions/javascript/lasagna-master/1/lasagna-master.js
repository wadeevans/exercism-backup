/// <reference path="./global.d.ts" />
// @ts-check

/**
 * Implement the functions needed to solve the exercise here.
 * Do not forget to export them so they are available for the
 * tests. Here an example of the syntax as reminder:
 *
 * export function yourFunction(...) {
 *   ...
 * }
 */

   export function cookingStatus(remainingTimeInMins) {
    if (!remainingTimeInMins) {
      if (remainingTimeInMins  === 0)
        {
          return "Lasagna is done.";
        }
      return "You forgot to set the timer.";
    }
    else {
      return "Not done, please wait.";
    }
  }

  export function preparationTime(layers, averagePrepTime = 2) {
    return layers.length * averagePrepTime;
  }

  export function quantities(layers) {

    const quantitiesObj = {
      noodles: 0,
      sauce: 0.0
    }

    for (let i of layers) {
      if (i === 'sauce') {
        quantitiesObj['sauce'] += 0.2;
      }
      if (i === 'noodles') {
        quantitiesObj['noodles'] += 50;
      }
  }

  return quantitiesObj;
}

export function addSecretIngredient(friendsList, myList) {
  myList.push(friendsList[friendsList.length - 1]);
}

export function scaleRecipe(recipeForTwo, numberOfPortions) {

  let scaledRecipe = Object.assign({}, recipeForTwo);
  console.log(scaledRecipe);

  for (let [key, value] of Object.entries(scaledRecipe)) {

    console.log(key, value);
    console.log(scaledRecipe[key]);
    scaledRecipe[key] =  (scaledRecipe[key] * (numberOfPortions / 2));
    console.log(scaledRecipe[key]);
  }

  return scaledRecipe;
}


Frankenstein

Problem Description
"Muahahaha! No one can stop me from creating the elixir of life," -Frankenstein. Frankenstein is an alchemist who is always striving to craft the elixir of life.

The elixir of life grants immortality to whoever drinks it. In his attempts to brew the elixir of life, Frankenstein combines numerous ingredients and potions, believing he will eventually succeed. However, he has never succeeded thus far.

But each time he brews something, he meticulously notes the ingredients. For example, when he combined snake fangs and wolfsbane, he discovered the awakening potion. In his notes, he recorded the recipe as follows:

awakening = snakefangs + wolfbane

Similarly, when three ingredients were required, he noted the recipe in his notes as

thunderstorm = rain + wind + lightening

In general, the recipe would be

Potion 1 = Ingredient 1 + Ingredient 2

Potion 2 = Ingredient 1 + Ingredient 2 + Ingredient 3

Potion 3 = Ingredient 1 + Ingredient 2 + Ingredient 3 + Ingredient 4

and so on ...

Every brew requires magical orbs, which are mythical energy balls. The number of magical orbs needed for a recipe is equal to the number of ingredients minus one.

A recipe of a potion includes multiple ingredients. An ingredient can be an item or a potion. Items are readily available things and while potions are brewed from items. In his notes, the resultant is always a potion.

He observed that sometimes the same potion can be created using different recipes, with some requiring fewer magical orbs. Given a potion and his notes, determine the minimum number of magical orbs needed to create that potion.

Constraints
0 < N < 20

Input
First line contains an integer N representing the number of recipes he noted.

Next N lines contain string without space representing the recipes in his notes as mentioned above.

Last line contains a single string representing the potion that he needs to brew.

Output
Print single integer representing the minimum number of magical orbs required.

Time Limit (secs)
1

Examples
Example1

Input

4

awakening=snakefangs+wolfbane

veritaserum=snakefangs+awakening

dragontonic=snakefangs+velarin

dragontonic=awakening+veritaserum

dragontonic

Output

1

Explanation

Based on the input, we need to determine the minimum number of magical orbs required to brew dragontonic. According to the notes, there are two recipes available for brewing dragontonic.

The two ways of brewing dragontonic are, dragontonic=awakening+veritaserum and dragontonic=snakefangs+velarin

The recipe with awakening, veritaserum where awakening is a potion that must be brewed first. Brewing awakening requires 1 magical orb and brewing it with veritaserum requires one additional magical orb, totaling 2 magical orbs.

Since second recipe of dragontonic requires only 1 magical orb which is the minimum number of orbs required, hence print 1 as output.

Example 2

Input

6

oculus=thunderbrew+jellfish

felix=thunderbrew+pumpkin

wigenweld=thunderbrew+ladybug

wigenweld=oculus+felix

thunderbrew=pumpkin+firefly

maxima=pumpkin+ladybug

wigenweld

Output

2

Explanation

To brew wigenweld with the minimum number of orbs, he first brewed thunderbrew, which requires 1 orb. Then, brewing thunderbrew with ladybug required an additional orb, resulting in wigenweld. Therefore, a total of 2 orbs were needed, which is the minimum requirement, hence the output is 2.

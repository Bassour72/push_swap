#!/bin/bash

# Take range (N) and max moves as arguments, or use defaults
N=${1:-5}  # Default range: 5 if no argument is provided
MAX_MOVES=${2:-12}  # Default max moves: 12

max_instr=0
max_arg=""

echo "Testing push_swap with range: 1 to $N and move limit: $MAX_MOVES"

while true; do
    
    ARG=$(seq 1 $N | sort -R | tr '\n' ' ')

   
    INSTR_COUNT=$(./push_swap $ARG | wc -l)

   
    SORTED=$(./push_swap $ARG | ./checker_Mac $ARG)

    
    if [ "$SORTED" == "OK" ]; then
        printf "\033[32m[OK] Sorted Correctly\033[0m\n"
    else
        printf "\033[31m[KO] Sorting Failed\033[0m\n"
        echo "ARG=\"$ARG\""
        break
    fi

    FINAL_SORTED=$(./push_swap $ARG | ./push_swap_apply $ARG)

    FIRST_NUM=$(echo "$FINAL_SORTED" | awk '{print $1}')
    SECOND_NUM=$(echo "$FINAL_SORTED" | awk '{print $2}')

    echo "Sorted sequence starts with: $FIRST_NUM, $SECOND_NUM"
    if [ "$INSTR_COUNT" -gt "$MAX_MOVES" ]; then
        echo "🚨 Found a case with $INSTR_COUNT instructions!"
        echo "ARG=\"$ARG\""
        break
    fi
    if [ "$INSTR_COUNT" -gt "$max_instr" ]; then
        max_instr=$INSTR_COUNT
        max_arg="$ARG"
    fi

    echo "Checked case with $INSTR_COUNT instructions"
done

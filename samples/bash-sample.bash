#!/bin/bash

# This script is to demonstrate the colors of a theme for Bash

# Variables
NAME="MyThemeTest"
VERSION="1.0.0"
DESCRIPTION="This script demonstrates colors for a Bash theme."
AUTHOR="John Doe"
IS_DEVELOPER=true

# Array
KEYWORDS=("theme" "bash" "example" "colors")

# Associative Array (declare and populate)
declare -A REPOSITORY
REPOSITORY=(
    ["type"]="git"
    ["url"]="https://github.com/example/my-theme-test.git"
)

# Functions
greet() {
    local first_name=$1
    local last_name=$2
    echo "Hello, my name is ${first_name} ${last_name}."
}

# Conditional Statement
if [ "$IS_DEVELOPER" = true ]; then
    echo "Author is a developer."
else
    echo "Author is not a developer."
fi

# Loop (for)
for keyword in "${KEYWORDS[@]}"; do
    echo "Keyword: $keyword"
done

# Loop (while)
counter=0
while [ $counter -lt 5 ]; do
    echo "Counter: $counter"
    ((counter++))
done

# Function Call
greet "Jane" "Smith"

# Case Statement
case "$VERSION" in
    "1.0.0")
        echo "Version is 1.0.0"
        ;;
    "2.0.0")
        echo "Version is 2.0.0"
        ;;
    *)
        echo "Unknown version"
        ;;
esac

# Command Substitution
CURRENT_DATE=$(date)
echo "Current date and time: $CURRENT_DATE"

# Here Document
cat <<EOF
This is a multiline string.
It demonstrates the usage of a Here Document in Bash.
EOF

# Trap (handling signals)
trap 'echo "Script interrupted!"' SIGINT

# Arithmetic Operations
num1=10
num2=5
sum=$((num1 + num2))
echo "Sum: $sum"

# Export a variable
export MY_VARIABLE="Some value"

# Exit the script
exit 0

find . -type f -name "*.sh" | sed -e "s/\.sh//g" -e "s/.*\///g"

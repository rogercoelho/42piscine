NUM_COMMITS=5

echo "Ultimos $NUM_COMMITS commits:"
git log -n $NUM_COMMITS --format="%H"

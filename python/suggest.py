def main():
    level = input("difficult or casual : ")
    if not(level == "difficult" or level == "casual"):
        print("enter correct choice.")
        return

    player = input("single or multi : ")
    if not(player == "single" or player == "multi"):
        print("enter correct choice.")
        return
    
    if level=="difficult" and player=="multi":
        suggest("PUBG")
    elif level=="difficult" and player=="single":
        suggest("chess with bot")
    elif level=="casual" and player=="multi":
        suggest("Ludo")
    else:
        suggest("Temple Run")


def suggest(game):
    print("you might like",game)

main()

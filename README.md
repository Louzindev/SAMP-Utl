[![Starred LouzinDeev/SAMP-Utl](https://reporoster.com/stars/LouzinDeev/SAMP-Utl)](https://github.com/LouzinDeev/SAMP-Utl/stargazers)
# SAMP-Utl (SA-MP Utils)
> EN: a lib used to add new natives and callbacks to SA-MP

> PT/BR: uma lib pra adicionar mais natives e callbacks ao SA-MP

# Contributing
> EN: the project is under development, feel free to contribute

> PT/BR: o projeto esta em desenvolvimento, sinta-se a vontade para contribuir

# TO-DO
> EN: Add a native/callback documentation, and add much more funcs hehe

>PT/BR: Adicionar uma documentaçao para as natives e callbacks, e claro, adicionar muito mais funçoes, hehe

## Natives
forward OnActorGetsAimed(const actorid, const playerid);
> * E chamado quando um actor e mirado por algum player, use 'toggleActorGetAimed(id, true)' para ativar essa funçao a um determinado actor

native toggleActorGetAimed(const actorid, bool:toggle);
> * usado pra ativar/desativar a possibilidade de chamar a callback OnActorGetsAimed para certo actor. por padrao definido false.

native GetPlayerWhoAimActor(const actorid);
> * retorna o player que mirou no actor, no momento. 'recomendo o uso da callback OnActorGetsAimed, e mais pratico xD'

native SetActorChatBubble(const actorid, const text[], const time);
> * Igualzinho ao SetPlayerChatBubble, adivinha so? mas pra actors!!

native ClearPlayerChat(const playerid);
> * limpa o chat do player

native IsPlayerInMainWorld(const playerid);
> * verifica se o player esta no mundo principal, retorna 0 ou 1, dependendo do resultado.

native AblePlayerTakeDamage(const playerid, bool:toggle);
> * Habilita ou nao o player de tomar danos, por padrao, true.

native IsPlayerAbleToTakeDamage(const playerid);
> * retorna 0 ou 1, dependendo se o player pode tomar dano ou nao

native TogglePlayerGiveDamage(const playerid, bool:toggle);
> * Ativa ou desativa o player de dar dano, por padrao true

native IsPlayerAbleToGiveDamage(const playerid);
> * retorna 0 ou 1, dependendo se o player pode dar dano ou nao


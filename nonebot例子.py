from nonebot import on_command
test=on_command("test",block=False)
@test.handle()
async def _():
  await test.send(message="Test")
